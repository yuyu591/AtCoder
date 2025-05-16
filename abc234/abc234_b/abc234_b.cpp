#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> x(n),y(n);
  for (int i = 0; i < n; i++) {
    cin >> x.at(i) >> y.at(i);
  }
  
  double max = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int X = abs(x.at(i) - x.at(j));
      int Y = abs(y.at(i) - y.at(j));
      double s = sqrt(X*X + Y*Y);
      
      if (s > max) {
        max = s;
      }
    }
  }
  cout << fixed << setprecision(10) << max << endl;
  return 0;
}