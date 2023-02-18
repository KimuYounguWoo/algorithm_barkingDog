#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

using ll = long long;
ll a, b[100005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> b[i];
    }
    sort(b, b+a);
    int cnt = 0;

    ll mxval = -(1ll << 62) -1;
    int maxCnt = 0;
    for(int i = 0; i < a; i++){
        if(i == 0 || b[i-1] == b[i]) cnt++;
        else{
            if(cnt > maxCnt){
                maxCnt = cnt;
                mxval = b[i-1];
            }
            cnt = 1;
        }
    }
    if(cnt > maxCnt) mxval = b[a-1];
    cout << mxval;

}