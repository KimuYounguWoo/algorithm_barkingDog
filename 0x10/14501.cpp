#include <bits/stdc++.h>
using namespace std;
#define time first
#define price second

int t[20], p[20], d[20];
int n;

// d[i] = i일날부터 상담을 시작할 때, 얻을 수 있는 최대 수익
// d[i]
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=1; i<=n; ++i) {
        cin >> t[i] >> p[i];
    }
    for (int i = n; i >= 1; i--) {
        // 마지막 날부터 시작
        if (i + t[i] <= n + 1) {
            // 현재 날짜에서 일을 할수 있나 ?? 있으면
            d[i] = max(d[i + t[i]] + p[i], d[i + 1]);
            // 다음 날에 상담을 했을 때랑, 오늘 상담을 했을 때를 비교
        }
        else d[i] = d[i + 1];
        // 일을 못하면, 다음 날로
    }
    cout << *max_element(d, d+n+1);
}