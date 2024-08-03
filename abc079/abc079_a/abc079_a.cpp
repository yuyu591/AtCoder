#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int a = n / 1000;
  int b = (n % 1000) / 100;
  int c = ((n % 1000) % 100) / 10;
  int d = (((n & 1000) % 100) % 10);
  
  if ((a == b && b == c) || (b == c && c == d)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
} 