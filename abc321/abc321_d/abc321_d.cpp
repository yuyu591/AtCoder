#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    //入力
    int n,m;
    long long p;
    cin >> n >> m >> p;
    vector<long long> a(n),b(m);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    for (int i = 0; i < m; i++) cin >> b.at(i);

    //Bを昇順に並び替え、累積和を配列sに保存
    sort(b.begin(), b.end());
    vector<long long> s(m + 1);
    for (int i = 0; i < m; i++) s.at(i + 1) = s.at(i) + b.at(i);

    //aを固定して二分探索
    long long total = 0;
    for (int ai = 0; ai < n; ai++) {
        int left = 0;
        int right = m;
        while (left < right) {
            int mid = (left + right) / 2;
            if (a[ai] + b[mid] <= p) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        total += s.at(left) + a.at(ai) * left + p * (m - left);
    }

    cout << total << endl;
}