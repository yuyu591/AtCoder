#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    vector<int> s(1000);
    s.at(0) = 1;
    for (int i = 0; i < 999; i++) {
        s.at(i + 1) = s.at(i) + i + 1;
    }

    for (int i = 1; i < 499500; i++) { //積もっている量
        for (int j = 0; j < 999; j++) {
            if (s.at(j) == a + i && s.at(j + 1) == b + i) {
                cout << i - 1 << endl;
                return 0;
            }
        }
    }
    return 0;
}