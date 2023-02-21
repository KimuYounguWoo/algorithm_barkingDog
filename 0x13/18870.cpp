#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int a[1000005];
vector<int> tmp, ans;
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        tmp.push_back(a[i]);   //중복을 제거하기 위해 만든, 임시 배열
    }
    sort(tmp.begin(),tmp.end());
    for (int i=0; i<n; i++){
        if(i==0 || tmp[i-1] != tmp[i])  // 첫 번째가 아니고, 이전과 지금이 같지 않으면 중복이 제거된 배열로
            ans.push_back(tmp[i]);
    }
    for (int i = 0; i<n; i++)
        cout << lower_bound(ans.begin(), ans.end(), a[i])-ans.begin() << " ";
}