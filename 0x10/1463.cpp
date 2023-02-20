#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
/*
X가 3으로 나누어 떨어지면, 3으로 나눈다.
X가 2로 나누어 떨어지면, 2로 나눈다.
1을 뺀다.
 */

int d[1000005];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 2; i <= n; i++) {
        d[i] = d[i - 1] + 1; // -1
        if (i % 2 == 0) d[i] = min(d[i], d[i / 2] + 1);
        if (i % 3 == 0) d[i] = min(d[i], d[i / 3] + 1);
    }
    cout << d[n];
}