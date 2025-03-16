#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < 6; i++) {
        if (n.at(i) == '1') {
            cnt1++;
        } else if (n.at(i) == '2') {
            cnt2++;
        } else if (n.at(i) == '3') {
            cnt3++;
        }
    }

    if (cnt1 == 1 && cnt2 == 2 && cnt3 == 3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}