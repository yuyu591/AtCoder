#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a(200);
    int index = 99;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;
        if (q == 1) {
            index++;
            cin >> a.at(index);
        } else {
            cout << a.at(index) << endl;
            index--;
        }
    }
}