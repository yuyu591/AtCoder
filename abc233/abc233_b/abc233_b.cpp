#include <bits/stdc++.h>
using namespace std;

int main() {
  int l,r;
  string s;
  cin >> l >> r >> s;
  
  for (int i = 0; i < (r-l+1) / 2; i++) {
    char x = s.at(l-1+i);
    s.at(l-1+i) = s.at(r-1-i);
    s.at(r-1-i) = x;
  }
  
  cout << s << endl;
  return 0;
}