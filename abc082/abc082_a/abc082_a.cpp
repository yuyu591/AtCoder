#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    double ave;
    if ((a + b) % 2 == 0) {
        ave = (a + b) / 2;
    } else {
        ave = (a + b + 1) / 2;
    }

    cout << ave << endl;
}