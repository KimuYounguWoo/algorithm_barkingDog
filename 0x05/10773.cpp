#include <bits/stdc++.h>
using namespace std;

int main() {
    int line;
    cin >> line;
    int sum = 0;
    stack<int> S;
    while (line--) {
        int data;
        cin >> data;
        if (data == 0) {
            sum -= S.top();
            S.pop();
        }
        else {
            S.push(data);
            sum += data;
        }
    }
    cout << sum << "\n";
}