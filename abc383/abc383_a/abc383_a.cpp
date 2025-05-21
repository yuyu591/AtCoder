#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int t,v;
    cin >> t >> v;

    int total = v, pretime = t;
    for (int i = 0; i < n - 1; i++) {
        cin >> t >> v;
        if (total < t - pretime) {
            total = 0;
        } else {
            total -= t - pretime;
        }
        total += v;
        pretime = t;
    }

    cout << total << endl;
    return 0;
}