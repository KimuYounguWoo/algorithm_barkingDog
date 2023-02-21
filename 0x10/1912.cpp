#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

// 3 1 5 6 -35 12 21 -1
// 1. 3
// 2. 4 (1+2)
// 3. 9 (1+2+3)
// 4. 15 (1+2+3+4) 저장
// 5. -35 (5) 저장
// 6. 12 (6) 저장

int d[100005], a[100005];
int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        d[i]=a[i];
    }
    for(int i = 1; i <= n; ++i)
        d[i] = max(d[i], d[i-1] + a[i]);
    cout << *max_element(d + 1, d + n + 1);
    // 0 10 -> 10
    // 10 -4 -> (10, 10-4=6)  10을 저장
    // 10 3 - -> 다시 초기화
}