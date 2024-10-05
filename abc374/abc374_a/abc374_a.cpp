#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int len = s.size();
  if(s.at(len-1) == 'n' && s.at(len-2) == 'a' && s.at(len-3) == 's') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}