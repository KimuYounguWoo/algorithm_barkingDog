#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 주식
// 행동 ( 1개 사기, n개 팔기, 아무것도 안 하기 )
// 최대 이익: 가장 저렴할 때 사서 가장 비쌀 때 판다.

int t, n;
int j[1000005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i)
            cin >> j[i];
        int mx = j[n-1];
        ll ans = 0ll;
        for(int i=n-2;i>=0;--i) { // 0-indexed & index -> -2
            if(j[i] > mx) mx=j[i];
            ans += mx-j[i];
        }
        cout << ans << '\n';
    }
}