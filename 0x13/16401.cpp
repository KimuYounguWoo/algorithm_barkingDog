#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// 조카는 m, 과자는 n
// 조카들에게 모두 같은 길이로, 최대길이
// per~~~ sort네 ...


int n, m;
int s[1000005];

bool solve(ll x) {
    ll ssize = 0;
    for (int i=0; i<m; i++) ssize += s[i] / x;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=0; i<m; i++) cin >> s[i];
    ll st = 1;
    ll en = 0x7ffffffff;
    while (st < en) {
        ll mid = (st+en+1)/2;
        if (solve(mid)) st = mid;
        else en = mid-1;
    }
    cout << st;
}