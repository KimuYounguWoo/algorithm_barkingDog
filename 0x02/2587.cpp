#include <bits/stdc++.h>
using namespace std;

bool odd = false;
int num[100], total;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i < 5; i++) cin >> num[i];

    for(int i = 0; i < 5; i++) total += num[i];
    cout << total / 5 << "\n";

    sort(num, num + 5);
    cout << num[2];
}