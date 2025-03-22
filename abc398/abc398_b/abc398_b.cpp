#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> A(7), cnt(13);
  for (int i = 0; i < 7; i++) {
    cin >> A.at(i);
    cnt.at(A.at(i) - 1)++;
  }
  sort(cnt.rbegin(), cnt.rend());
  int a0 = cnt.at(0), a1 = cnt.at(1);
  if ((a0 == 5 && a1 == 2) || (a0 == 4 && a1 >= 2) || (a0 == 3 && a1 >= 2)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}