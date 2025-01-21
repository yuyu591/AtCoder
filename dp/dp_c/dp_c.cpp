#include <iostream>
#include <vector>
using namespace std;

//値を最大化する関数
template<class T> void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}

int main() {
    //入力
    int n;
    cin >> n;
    vector<vector<long long> > a(n+1, vector<long long>(3,0));
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j]; //i日目に活動jを選んだ場合の幸福度を表す
        }
    }

    vector<vector<long long> > dp(n+1, vector<long long>(3,0));
    for (int i = 1; i <= n; i++) { //i日目からn日目まで考える
        for (int j = 0; j < 3; j++) { //i日目に選んだ活動
            for (int k = 0; k < 3; k++) { //i+1日目に選ぶ活動
                if (j == k) continue; //2日連続同じ活動を避ける
                /*
                i日目にkを選ぶ場合の幸福度の総和と、
                    i-1日目にjを選んだ場合の幸福度の総和 + i日目にkを選んで得られる幸福度
                すでに記録されているdp[i][k]の最大値 と i-1日目からi日目に遷移する幸福度の合計 を比較
                */
                chmax(dp[i][k], dp[i-1][j] + a[i][k]); 
            }
        }
    }

    //最終日にどの活動を選べば最も幸福度が高くなるか調べて出力
    long long res = 0;
    for (int i = 0; i < 3; i++) {
        chmax(res, dp[n][i]); 
    }
    cout << res << endl;
}