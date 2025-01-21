#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}

int main() {
    //入力
    int n;
    long long w;
    cin >> n >> w;
    vector<long long> weight(n), value(n);
    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
    }

    //DPテーブル
    //dp[i][j]は、i-1番目までの品物から重さがjを超えないように選んだときの、価値の総和の最大値
    vector<vector<long long> > dp(n + 1, vector<long long>(w + 1, 0));

    //DP
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= w; j++) {
            //i番目の品物を選んだ後の残り容量が正の場合 = i番目の品物を選べる場合
            if (j - weight[i] >= 0) {
                chmax(dp[i+1][j], dp[i][j - weight[i]] + value[i]);
            }

            //i番目の品物を選ばない場合
            chmax(dp[i+1][j], dp[i][j]);
        }
    }

    cout << dp[n][w] << endl;
}