#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second
int n;
int a[100005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int m;
    cin >> m;
    while (m--) {
        int t;
        cin >> t;
        cout << binary_search(a, a+n, t) << '\n';
    }
}