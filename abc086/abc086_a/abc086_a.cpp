#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  
  int res = a * b % 2;
  if (res) {
    cout << "Odd" << endl;
  } else {
    cout << "Even" << endl;
  }
}