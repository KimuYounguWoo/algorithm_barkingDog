#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second
int n, m;
int a[100005];
// 카드의 개수
// 카드의 숫자
// 알고싶은 카드의 개수
// 알고싶은 카드의 숫자
int lower_idx(int target, int len){
    int st = 0;
    int en = len;
    while(st < en){
        int mid = (st+en)/2;
        if(a[mid] >= target) en = mid;
        else st = mid+1;
    }
    return st;
}

int upper_idx(int target, int len){
    int st = 0;
    int en = len;
    while(st < en){
        int mid = (st+en)/2;
        if(a[mid] > target) en = mid;
        else st = mid+1;
    }
    return st;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cin >> m;
    while (m--) {
        int t;
        cin >> t;
        cout << upper_idx(t, n)- lower_idx(t, n) << " ";
    }

}