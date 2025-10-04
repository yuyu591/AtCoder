#include <bits/stdc++.h>
using namespace std;

int main() {
    string x,y;
    cin >> x >> y;

    if ((y == "Serval" && x == "Ocelot") 
        || (y == "Lynx" && x == "Ocelot") 
        || (y == "Lynx" && x == "Serval")) {
            cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}