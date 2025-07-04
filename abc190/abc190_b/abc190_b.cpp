#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s,d;
    cin >> n >> s >> d;

    bool ans = false;
    for (int i = 0; i < n; i++) {
        int x,y;
        cin >> x >> y;

        if (x < s && y > d) {
            ans = true;
            break;
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}