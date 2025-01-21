#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long left = 0;
    long long right = 2e9;
    
    while (right - left > 1) {
        long long mid = (left + right) / 2;
        if ((mid * (mid + 1)) / 2 <= n + 1) { 
            left = mid; 
        } else {
            right = mid;
        }
    }
    cout << n - left + 1 << endl;
    return 0;
}