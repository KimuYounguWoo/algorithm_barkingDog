#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

int d[505][505], mx[505][505];
int n;

// 테이블: d[i][j] = 경로 상에 있는 수의 합
// 1 + ( 2 or 3 ) + ( 4 or 5 or 6 ) ....
// 만약 n=3 이면 최대값은 = d[0] + max d[1 or 2] + max d[4 5 6]
// 줄을 수열로 놓으면 d[줄의 위치][줄이 가지고 있는 원소의 개수]
// 초기값: d[1] = input

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=i; ++j) {
            cin >> mx[i][j];
        }
    }
    d[1][1] = mx[1][1];
    for(int i = 2; i <= n; ++i)
        for(int j = 1; j <= i; ++j)
            d[i][j] = max(d[i-1][j-1], d[i-1][j]) + mx[i][j];
    cout << *max_element(d[n] + 1, d[n] + n + 1);
}