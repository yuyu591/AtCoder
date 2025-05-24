#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;

    double cnt = 0;
    for (int a = 1; a <= 6; a++) {
        for (int b = 1; b <= 6; b++) {
            if ((a + b < x) && (abs(a - b) < y)) {
                cnt++;
            }
        }
    }
    double ans = (36 - cnt) / 36;
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}