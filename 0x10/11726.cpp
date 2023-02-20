#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int d[10005];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    d[1] = 1;
    d[2] = 2;
    for (int i=3; i<=n; i++) d[i] = (d[i-1]+d[i-2]) % 10007;
    //int overflow를 막기위해서 % 10007
    cout << d[n];
}