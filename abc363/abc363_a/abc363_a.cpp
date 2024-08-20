#include <bits/stdc++.h>
using namespace std;

int main() {
  int r;
  cin >> r;
  
  if (1 <= r && r <= 99) {
    cout << 100 - r;
  } else if (100 <= r && r <= 199) {
    cout << 200 - r;
  } else if (200 <= r && r <= 299) {
    cout << 300 - r;
  }
}