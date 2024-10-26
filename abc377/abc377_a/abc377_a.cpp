#include <bits/stdc++.h>
using namespace std;

int judge (string s) {
    if (s.at(0) == 'A') {
        if (s.at(1) == 'B' && s.at(2) == 'C') {
            return 1;
        } else if (s.at(1) == 'C' && s.at(2) == 'B')  {
            return 1;
        }
    } else if (s.at(0) == 'B') {
        if (s.at(1) == 'A' && s.at(2) == 'C') {
            return 1;
        } else if (s.at(1) == 'C' && s.at(2) == 'A')  {
            return 1;
        }
    } else if (s.at(0) == 'C') {
        if (s.at(1) == 'A' && s.at(2) == 'B') {
            return 1;
        } else if (s.at(1) == 'B' && s.at(2) == 'A')  {
            return 1;
        }
    }
    return 0;
}

int main() {
    string s;
    cin >> s;

    if (judge(s)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}