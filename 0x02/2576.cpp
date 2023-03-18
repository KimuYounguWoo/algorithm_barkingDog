#include <bits/stdc++.h>
using namespace std;

bool odd = false;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0, count = 0, mins=100;
    int test[6];
    stack<int> S;
    for (int i = 0; i < 7; i++) {
        int input;
        cin >> input;
        if (input % 2 != 0) {
            sum += input;
            S.push(input);
            odd = true;
            if (S.top() < mins) mins = S.top();
        }
    }
    if (odd){
    cout << sum << "\n";
    cout << mins;}
    else cout << -1;
}