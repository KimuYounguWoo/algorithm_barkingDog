#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

// 숫자 카드 2 -> 가지고 있는지 여부만을 파악
int n, m;
// n = 가지고 있는 카드, m = 비교할 카드
int a[500005], b[500005], ans[500005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a, a+n);
    for (int i = 0; i < m; i++)
        cout << binary_search(a, a+n, b[i]) << ' ';
}