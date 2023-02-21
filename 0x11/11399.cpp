#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

// ATM
// 사람들이 돈을 뽑는데 걸리는 최소 시간
// 짧은 시간 순서대로 정렬

int d[1005];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1; i <= n; ++i) {
        cin >> d[i];
    }
    // 1 2 3 3 4
    // 1 + 3 + 6 + 9 +
    sort(d+1, d+n+1);
    d[0]=0;
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        d[i] += d[i-1];
        sum += d[i];
    }
    cout << sum;
}

// 1 2 3 3 4 / 1 3 6 9 13