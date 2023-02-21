#include <bits/stdc++.h>
using namespace std;

// 공주님의 정원
// 꽃 (피는 날과 지는 날이 정해져있음)
// 꽃들의 수를 최소한으로
// 3.1 ~ 11.30 매일 꽃이 한 가지 이상 피어있도록

int n;
int sm, sd, em, ed;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<pair<int, int>> flower;
    for(int i=0; i<n; i++) {
        cin >> sm >> sd >> em >> ed;
        flower.push_back({sm * 100 + sd, em * 100 + ed});
    }
    int cur = 301;
    int cnt = 0;
    while ( cur < 1201) {
        int flow = cur;
        for (int i=0; i<n; i++) {
            if (flower[i].first <= cur && flower[i].second > flow)
                flow = flower[i].second;
        }
        if (flow == cur) { // 마지막날까지 왔을 때
            cout << 0;
            return 0;
        }
        cnt++;
        cur = flow;
    }
    cout << cnt;
}