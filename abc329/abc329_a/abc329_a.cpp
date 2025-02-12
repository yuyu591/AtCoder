#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int len_s = s.size();
  cout << s.at(0);
  for (int i = 1; i < len_s; i++) {
    cout << " " << s.at(i);
  }
  cout << endl;
}