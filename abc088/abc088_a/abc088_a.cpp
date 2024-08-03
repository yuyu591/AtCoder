#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,a;
  cin >> n >> a;
  
  int res = n % 500 - a;
  if (res <= 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}