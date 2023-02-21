#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
using ll = long long;
int n, t;
ll d[105];
// n = 9 / 6+7
// d[i] = d[i-2] + d[i-3]
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    d[1]=1; d[2]=1; d[3]=1;
    for (int i=4; i<=100; i++)
        d[i] = d[i-2] + d[i-3];
    while (t--) {
        cin >> n;
        cout << d[n] << '\n';
    }
}