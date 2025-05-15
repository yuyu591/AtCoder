#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  if (s == "N") {
    cout << "S" << endl;
  } else if (s == "S") {
    cout << "N" << endl;
  } else if (s == "W") {
    cout << "E" << endl;
  } else if (s == "E") {
    cout << "W" << endl;
  } else if (s == "NW") {
    cout << "SE" << endl;
  } else if (s == "NE") {
    cout << "SW" << endl;
  } else if (s == "SW") {
    cout << "NE" << endl;
  } else {
    cout << "NW" << endl;
  }
  return 0;
}