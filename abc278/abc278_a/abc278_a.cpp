#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    vector<int> ans(n,0);
    if (k < n) {
        for (int i = 0; k+i < n; i++) {
            ans.at(i) = a.at(k+i);
        }
    }

    cout << ans.at(0);
    for (int i = 1; i < n; i++) {
        cout << " " << ans.at(i);
    }
    cout << endl;

    return 0;
}
