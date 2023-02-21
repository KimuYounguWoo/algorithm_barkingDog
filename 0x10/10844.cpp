#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second
#define x 1000000000
using ll = long long;
// 계단수
// i = 1 --- 1~9 (9)
// i = 2 --- 01 / 10 12 / 21 23 / ... / 78 76 / 89 87 / 98
// i = 3 --- ()()() = ()33??
// 010 / 101 121 123 / 212 210 232 234 / 321 323 343 345 / ... / 898 878 876 / 987
// i = 4 --- 1012 1010 1212 1232 1234
// d[i][j] = 길이가 i이며, 끝자리가 j인 계단수의 개수
// 점화식:
// d[i][j] =
// 길이가 하나 작고, 마지막 자리수도 하나 빠진 식 d[i-1][j-i] +
// 길이는 같지만, 자리수가 하나 늘어난 수 d[i-1][j+1]
// 만약 길이가 3이고 끝자리가 4인 계단수의 개수를 구하려면
// 1. 길이가 2이고 끝자리가 3인 계단수와, 길이가 2이고 끝자리가 5인 계단수를 구한다
// 2. 재귀를 통해 ㅜㄱ한다?

int n;
ll d[105][10];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= 9; ++i) d[1][i] = 1;
    // 초기값 d[1][]

    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j <= 9; ++j) {
            if (j==0) d[i][j] = d[i-1][j+1] % x;
            else if (j==9) d[i][j] = d[i-1][j-1] % x;
            else {
                d[i][j] = (d[i-1][j-1]+d[i-1][j+1]) % x;
            }
            d[i][j] %= x;
        }
            // k가 0이나 9면 그대로
        }
    ll ans = 0ll;
    for (int i = 0; i < 10; i++)
    {
        ans = ans + d[n][i];
    }
    cout << ans % x << endl;
}