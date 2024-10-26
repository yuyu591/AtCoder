#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v(8);
    for (int i = 0; i < 8; i++) {
        cin >> v.at(i);
    }

    //行のチェック
    int cnt_line = 0;

    for (int i = 0; i < 8; i++) {
        string line = v.at(i);
        int cnt_dot = 0;
        for (int k = 0; k < 8; k++) {
            if (line.at(k) == '#') {
                break;
            } else {
                cnt_dot++;
            }
        }
        if (cnt_dot == 8) {
            cnt_line++;
        }
    }

    //列のチェック
    int cnt_column;
    for (int i = 0; i < 8; i++) {
        int cnt_dot = 0;
        for (int k = 0; k < 8; k++) {
            string line = v.at(k);
            if (line.at(i) == '#') {
                break;
            } else {
                cnt_dot++;
            }
        }
        if (cnt_dot == 8) {
            cnt_column++;
        }
    }

    cout << cnt_line * cnt_column << endl;
}