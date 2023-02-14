#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    queue<int> res;
    for (int i = 1; i <= n; i++) res.push(i);
    cout << '<';
    while (!res.empty()) {
        for (int i = 0; i < k - 1; i++) {
            res.push(res.front());
            res.pop();
        }
        cout << res.front();
        res.pop();
        if (res.size()) cout << ", ";
    }
    cout << '>';
}