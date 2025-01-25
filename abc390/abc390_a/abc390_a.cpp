#include <iostream>
using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    int cnt = 0;
    for (int k = 0; k < 5; k++) {
        if (a[k] == k + 2) {
            cnt = 1;
            break;
        } else if (a[k] > k + 2) {
            cnt = 0;
            break;
        }
    }

    if (cnt == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}