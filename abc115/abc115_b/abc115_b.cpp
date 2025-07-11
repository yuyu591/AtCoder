#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p.at(i);
    }
    sort(p.rbegin(), p.rend());

    int total = p.at(0) / 2;
    for (int i = 1; i < n; i++) {
        total += p.at(i);
    }

    cout << total << endl;
    return 0;
}