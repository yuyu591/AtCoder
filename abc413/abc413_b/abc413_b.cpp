#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }

    vector<string> doc;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i != j) {
                doc.push_back(s.at(i) + s.at(j));
            }
        }
    }

    sort(doc.begin(), doc.end());

    string temp = doc.at(0);
    int cnt = 1;
    for (int i = 1; i < n * (n-1); i++) {
        if (doc.at(i) != temp) {
            temp = doc.at(i);
            cnt++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}