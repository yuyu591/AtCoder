#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = n, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    if (n % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}