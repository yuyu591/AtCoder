#include <iostream>
using namespace std;

static int compute(int x) {
  return x * x + 2 * x + 3;
}

int main() {
  int t;
  cin >> t;
  
  int ans = compute(compute(compute(t) + t) + compute(compute(t)));
  cout << ans << endl;
}