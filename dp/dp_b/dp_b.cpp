#include <iostream>
#include <vector>
using namespace std;

//最小コストを更新する関数
template<class T> void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}

const long long INF = 1LL << 60;

int main() {
    int n,k;
    cin >> n >> k;
    vector<long long> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    //配列dpを定義する、全要素の初期値をINFにする
    //dp[i]は足場iへと移動するのに必要な最小コスト
    vector<long long> dp(n,INF);
    dp[0] = 0; //初期値は0

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= k; j++) { //足場iからk個先の足場へ行くことを考える
            if (i+j < n) {
                chmin(dp[i+j], dp[i] + abs(h[i] - h[i+j]));
            }
        }
    }

    cout << dp[n-1] << endl;
}
