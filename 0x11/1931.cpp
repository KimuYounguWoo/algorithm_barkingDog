#include <bits/stdc++.h>
using namespace std;
#define ed first
#define st second

int n;
pair<int, int> sched[100005];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> sched[i].st >> sched[i].ed;
    }
    sort (sched, sched+n);
    //회의 시간을 시작 시간 기준으로 정렬
    int time = 0;
    int cnt = 0;
    for (int i=0; i<n; i++) {
        if (time > sched[i].st) continue;
        cnt++;
        time = sched[i].ed;
    }
    cout << cnt;

}