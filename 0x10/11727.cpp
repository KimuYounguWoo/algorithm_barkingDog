#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

int d[1005];
int n;

// 2n 타일링 2
// 테이블: 2*n의 직사각형을 채울 때, 2*1 2*2 1*2 세가지를 넣을 수 있다
// d[i] = 2*i 크기의 직사각형을 채우는 방법의 수
// 점화식은 d[i] = d[i-1] + d[i-2]*2
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    cin >> n;
    d[1] = 1;
    d[2] = 3;
    for(int i = 3; i <= n; ++i) d[i] = (d[i-1] + d[i-2] * 2) % 10007;
    cout << d[n];
}