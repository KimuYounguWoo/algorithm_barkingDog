// 실패!!!!!!!!!!!!


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//#define X first
//#define Y second


// 가지고 잇는 랜선의 개수,  필요한 랜선의 개수
// 가지고있는 랜선의 길이들



int n, k;
// k = 필요한 랜선의 개수
// n = 가지고 있는 랜선의 개수
int a[1000005];
// a = 가지고 있는 랜선의 길이 배열
bool solve(ll x) {
    ll cur = 0;
    for (int i=0; i<k; i++) cur += a[i] /x;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i=0; i<n; i++) cin >> a[i];
    ll st = 1;
    ll en = 0x7ffffffff;
    while (st < en) {
        ll mid = (st+en+1)/2;
        if (solve(mid)) st = mid;
        else en = mid-1;
    }
}