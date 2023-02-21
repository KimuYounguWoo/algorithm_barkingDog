#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

using ll = long long;

// 테이블: N자리의 이친수의 개수를 구하자 -> 1, 0으로 이루어진
// *이친수: 1은 연속 X, 0으로 시작 X
// 점화식: 이전이 ( 0, 1 )
// n=1 -> 1
// n=2 -> 10
// n=3 -> 100 101
// ... n=4 -> 1000 1010 1001
//
ll d[95] = { 0, 1, 1, 2, 3, };

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 5; i <= n; i++)
        d[i] = d[i - 2] + d[i - 1];
    cout << d[n];
}