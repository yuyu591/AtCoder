#include <iostream>
using namespace std;

int main() {
  string a,b;
  cin >> a >> b;
  
  if (a == "sick" && b == "sick") {
    cout << 1 << endl;
  } else if (a == "sick" && b == "fine") {
    cout << 2 << endl;
  } else if (a == "fine" && b == "sick") {
    cout << 3 << endl;
  } else {
    cout << 4 << endl;
  }
  return 0;
} 