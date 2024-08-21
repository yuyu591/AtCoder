#include <bits/stdc++.h>
using namespace std;

int main() {
  int r,g,b;
  string c;
  cin >> r >> g >> b >> c;
  
  if (c == "Red") {
    if (g > b) {
      cout << b;
    } else {
      cout << g;
    }
  }
  
  if (c == "Green") {
    if (r > b) {
      cout << b;
    } else {
      cout << r;
    }
  }
  
  if (c == "Blue") {
    if (r > g) {
      cout << g;
    } else {
      cout << r;
    }
  }
}
