#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

using ll = long long;

int n;
string datas;
vector<ll> jp;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> datas;
        reverse(datas.begin(), datas.end());
        jp.push_back(stoll(datas));
    }
    reverse(jp.begin(), jp.end());
    // 맨 앞 숫자가 0이면 삭제
    sort(jp.begin(), jp.end());
    for(auto i : jp) cout << i << '\n';

}