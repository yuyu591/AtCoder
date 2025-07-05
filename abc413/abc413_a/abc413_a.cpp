#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int total = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        total += a;
    }

    if (total <= m) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}