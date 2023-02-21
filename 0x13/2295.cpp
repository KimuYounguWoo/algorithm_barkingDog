#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

// 세 수의 합
// 1. 세 수의 합을 합 배열에 넣고, - N^3 -> X
// 2. 그 합배열과 원 배열을 비교해서, 있는 값중 가장 큰 값을 출력


int n;
int a[1005];
vector<int> two;    // 세 수중 두 수만 합친 배열

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    for (int i=0; i<n; i++)
        for (int j=i; j<n; j++)
            two.push_back(a[i]+a[j]);
    sort(two.begin(), two.end());
    for (int i=n-1; i>0; i--) {
        for (int j = 0; j < i; j++) {
            if (binary_search(two.begin(), two.end(), a[i] - a[j])) {
                cout << a[i];
                return 0;
            }
        }
    }
}
