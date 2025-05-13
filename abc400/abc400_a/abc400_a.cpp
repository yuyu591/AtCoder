#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  
  if (400 % a != 0) {
    cout << -1 << endl;
  } else {
    cout << 400 / a << endl;
  }
  return 0;
}