#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n;
int a[105], b[105];

bool cmp(int x, int y) {
    return x>y;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        cin >> b[i];
    sort(a, a+n);
    sort(b, b+n, cmp);
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += (a[i]*b[i]);
    }
    cout << sum;
}