#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,m;
    cin >> h >> m;

    int H = h;
    int M = m;
    for (int i = 0; i < 2000; i++) {
        int a = H / 10;
        int b = H % 10;
        int c = M / 10;
        int d = M % 10;

        int swapedH = a * 10 + c;
        int swapedM = b * 10 + d;
        if ((swapedH >= 0 && swapedH <= 23) && (swapedM >= 0 && swapedM <= 59)) {
            cout << H << " " << M << endl;
            return 0;
        } 

        M++;
        if(M == 60) {
            M = 0;
            H++;
        }
        if(H == 24) {
            H = 0;
        }
    }
    return 0;
} 