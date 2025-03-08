#include <iostream>
using namespace std;

int main() {
    int n,a1;
    cin >> n >> a1;

    int cnt = 0;
    int a;
    for (int i = 0; i < n - 1; i++) {
        cin >> a;
        if (a == a1) {
            cnt++;
        } else {
            a1 = a;
            cnt = 0;
        }

        if (cnt == 2) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}