#include <iostream>
using namespace std;

int main() {
  int n,l,a;
  cin >> n >> l;
  
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a >= l) {
      cnt++;
    }
  }
  cout << cnt << endl;
}