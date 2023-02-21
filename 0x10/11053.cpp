#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second
//최장 부분 수열
// d[i] =
int d[1005], a[1005];
vector<vector<int>> ans;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    fill(d, d + n, 1);
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    for (int i=0; i<n; ++i)
        for (int j = 0; j < i; ++j)
            if (a[j] < a[i]) d[i] = max(d[i], d[j] + 1);
    cout << *max_element(d, d + n);
}