#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  bool login = false;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "private" && login == false) {
      cnt++;
    } else if (s == "login") {
      login = true;
    } else if (s == "logout") {
      login = false;
    }
  }
  cout << cnt;
  return 0;
}
