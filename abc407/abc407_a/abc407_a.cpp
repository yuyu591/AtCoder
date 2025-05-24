#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b;
    cin >> a >> b;

    double n = a/b;
    int above = a/b + 1;
    int below = a/b;

    if (above - n < n - below) {
        cout << above << endl;
    } else {
        cout << below << endl;
    }
    return 0;
}