#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  
  long long display = 1;
  long long a;
  long long max = (long long) pow(10, k);
  for (int i = 0; i < n; i++) {
    cin >> a;
  
    if (display > max / a || (display == max / a && max % a == 0)) {
      display = 1;
    } else {
      display *= a;
    }
  }
  cout << display << endl;
  return 0;
}