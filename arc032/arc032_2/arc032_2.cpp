#include <iostream>
#include <vector>
using namespace std;

struct UnionFind {
    vector<int> par, siz; //sizは頂点数を表す

    //初期化
    UnionFind(int n) : par(n, -1), siz(n, 1) {} //最初は全ての要素が根であるから-1で初期化

    //根を求める
    int root(int x) {
        if (par[x] == -1) {
            return x;
        } else {
            return par[x] = root(par[x]); //経路圧縮をして根を求める
        }
    }

    //xとyが同じグループに属するかどうか(根が一致するかどうか)
    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    //xを含むグループとyを含むグループとを併合する
    bool unite(int x, int y) {
        //x,yをそれぞれ根まで移動する
        x = root(x);
        y = root(y);

        //すでに同じグループの時は何もしない
        if (x == y) {
            return false;
        }

        //union by size
        if (siz[x] < siz[y]) { //サイズが小さい方をyとする
            swap(x,y);
        }

        //yをxの子とする
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }

     //xを含むグループのサイズ
     int size(int x) {
        return siz[root(x)];
    }
};

int main() {
    //入力
    int n,m;
    cin >> n >> m;

    UnionFind uf(n);

    for (int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        //入力を受け、aを含むグループとbを含むグループを併合
        uf.unite(a-1,b-1);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (uf.root(i) == i) {
            cnt++;
        }
    }
    cout << cnt - 1 << endl;
    return 0;
}