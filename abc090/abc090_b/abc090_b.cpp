#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++) {
        string num = to_string(i);
        if ((num.at(0) == num.at(4)) && (num.at(1) == num.at(3))) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
}