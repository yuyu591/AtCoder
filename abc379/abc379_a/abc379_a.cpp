#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = to_string(n);

    char a = s.at(0);
    char b = s.at(1);
    char c = s.at(2);

    cout << b << c << a << " " << c << a << b << endl;
    return 0;
}
