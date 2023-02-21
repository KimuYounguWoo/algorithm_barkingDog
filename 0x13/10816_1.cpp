#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second
int n, m;
int a[500005];
// 카드의 개수
// 카드의 숫자
// 알고싶은 카드의 개수
// 알고싶은 카드의 숫자

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cin >> m;
    while (m--) {
        int t;
        cin >> t;
        cout << upper_bound(a, a+n, t)- lower_bound(a,a+n,t) << " ";
    }

}