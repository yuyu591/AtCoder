#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> number(4);
  for (int i = 0; i < 4; i++) {
    cin >> number.at(i);
  }
  sort(number.begin(), number.end());
  int a = number.at(0);
  int b = number.at(1);
  int c = number.at(2);
  int d = number.at(3);
  
  if (a == b && c == d && b != c) { //ツーペアが2つ
    cout << "Yes" << endl;
  } else if ((a == b && b == c && c != d) || (b == c && c == d && a != b)) { //3カード
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}