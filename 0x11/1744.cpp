#include <bits/stdc++.h>
using namespace std;

// 수 묶기
// 수열의 합이 최대가 나오게 수를 묶어라
// 묶기는 위치에 상관없이
// 그리디적으로 보면 ,,, mx, mx2 -> mx3 mx4 -> ...
// 음수 -> 음수끼리
// if a[i] < 0 / a[i]*a[i] -> max
// if a[i] > 0 / a[i]*a[i] -> max

int n,k;
vector<int> pl, mi, ze, ans;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> k;
        if (k>0) {
            if (k == 1) {
                ans.push_back(k);
            } else {
                pl.push_back(k);
            }
        }
        else if (k<0) {
            mi.push_back(k);
        } else {
            ze.push_back(k);
        }
    }
    sort(pl.begin(), pl.end());
    sort(mi.begin(), mi.end());

    int psize = pl.size();
    int msize = mi.size();
    int zsize = ze.size();

    if (psize%2 != 0) ans.push_back(pl[0]);
    for (int i = psize-1; i > 0; i-=2)
        ans.push_back(pl[i]*pl[i-1]);
    if (msize%2 != 0) {
        if (zsize>0) {
            ze.pop_back();
        } else {
            ans.push_back(mi[msize-1]);
        }
    }
    for (int i = 0; i<msize; i+=2)
        ans.push_back(mi[i]*mi[i+1]);
    int sum = 0;
    for (int i = 0; i < ans.size(); i++) {
        sum += ans[i];
    } cout << sum;
}