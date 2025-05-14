#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int pre = 0;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    if (input > pre) {
      pre = input;
      continue;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}