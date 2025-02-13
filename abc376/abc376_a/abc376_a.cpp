#include <iostream>
using namespace std;

int main() {
    int n,c,t;
    cin >> n >> c;
  
    int t0 = 0; //t0は前回飴をもらった時間
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (i == 0) { //最初の1回は確定でもらえる
            cnt++;
            t0 = t;
        } else {
            if (t - t0 >= c) {
                cnt++;
                t0 = t;
            }
        }
    }
    cout << cnt << endl;
}