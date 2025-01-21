#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;

int main() {
    int n;
    cin >> n;
    vector<long long> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    //配列dpを定義する、全要素の初期値をINFにする
    //dp[i]は足場iへと移動するのに必要な最小コスト
    vector<long long> dp(n,INF);
    dp[0] = 0; //初期値は0

    for (int i = 1; i < n; i++) {
        if (i == 1) { //i=1のときは行き方1通りしかない
            dp[i] = abs(h[i] - h[i-1]); //h[1]-h[0]
        } else { //足場iに行く時、i-2かi-1どちらから飛んでくるのが良いのか(コスト最小になるのか)考える
            dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), 
                dp[i-2] + abs(h[i] - h[i-2]));
        }
    }

    cout << dp[n-1] << endl;
}
