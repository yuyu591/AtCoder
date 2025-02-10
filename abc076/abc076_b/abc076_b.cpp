#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    int total = 1;
    for (int i = 0; i < n; i++) {
        if ((total * 2) < (total + k)) {
            total *= 2;
        } else {
            total += k;
        }
    }

    cout << total << endl;
} 