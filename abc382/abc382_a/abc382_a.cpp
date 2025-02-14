#include <iostream>
using namespace std;

int main() {
  int n,d;
  string s;
  cin >> n >> d >> s;
  
  int cnt_emp = 0;
  for (int i = 0; i < n; i++) {
    if (s.at(i) == '.') {
      cnt_emp++;
    }
  }
  cout << cnt_emp + d << endl;
}