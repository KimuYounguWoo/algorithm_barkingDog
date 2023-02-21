#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

int d[1005], a[1005];
// 증가 부분 수열
// : 몇 개의 수를 제거해서 오름차순으로 정렬된 수열
// 1번 고르고, 2번이
// 1 100 2 50 60 3 5 6 7 8
// 증가 부분 수열
// 1. 1 100
// 2. 1 2 50 60
// 3. 1 3 5 6 7 8
// 4. 1 50 60
// 5. 1 60
//

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> a[i];
        d[i] = a[i];
    }
    for (int i=0; i<n; ++i)
        for (int j=0; j<i; ++j)
            if (a[j] < a[i]) d[i] = max(d[i], d[j] + a[i]);
    cout << *max_element(d, d+n);
}