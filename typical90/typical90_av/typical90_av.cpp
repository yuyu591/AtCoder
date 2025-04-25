#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    vector<long long> score(2 * n);
    int index = 0;
    for (int i = 0; i < n; i++) {
        long long a,b;
        cin >> a >> b;
        score.at(index) = b;
        index++;
        score.at(index) = a - b;
        index++;
    }
    sort(score.rbegin(),score.rend());

    long long ans = 0;
    for (int i = 0; i < k; i++) {
        ans += score.at(i);
    }

    cout << ans << endl;
}