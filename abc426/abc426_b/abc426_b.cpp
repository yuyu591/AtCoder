
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char ini = s.at(0);
    int index = 0;

    if (ini != s.at(s.size() - 1)) {
        if (ini != s.at(1)) {
            cout << ini << endl;
        } else {
            cout << s.at(s.size() - 1);
        }
    } else {
        for (int i = 1; i < s.size(); i++) {
            if (s.at(i) != ini && s.at(i + 1) == ini) {
                index = i;
                break;
            }
        }
        if (index == 0) cout << ini << endl;
        else cout << s.at(index) << endl;
    }
    return 0;
}