#include <iostream>
using namespace std;

int main() {
  int x,y;
  cin >> x >> y;
  
  int dif = x - y;
  if ((-2 <= dif && dif <= -1) || (1 <= dif && dif <= 3)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}