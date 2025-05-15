#include <iostream>
using namespace std;

int main() {
  long long n,m;
  cin >> n >> m;
  
  long long number = 1;
  long long x = 1;
  for (int i = 0; i < m; i++) {
    number *= n;
    x += number;
    if (x > 1000000000) {
      cout << "inf" << endl;
      return 0;
    }
  }
  cout << x << endl;
  return 0;
}
