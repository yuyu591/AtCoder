#include <iostream>
using namespace std;

int main() {
    int n,c;
    cin >> n >> c;
  
    int pre, cnt = 1; //preは前回飴をもらった時間、最初の1回は確定でもらえるから初期値1
    cin >> pre; //1つ目のtを直接preに代入することで綺麗に進む！

    for (int i = 1; i < n; i++) {
        int t;
        cin >> t;
        if (t - pre >= c) {
            cnt++;
            pre = t;
        }
    }
    cout << cnt << endl;
}