#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

string gear[5];
// 톱니바퀴의 톱니는 8개, 토톱니바퀴는 4개, 톱니는 ( S or N )
// 톱니바퀴는 1, 2, 3, 4번을 가짐
// 이때 톱니바퀴를 K번 회전 시키고, 한번 회전은 한칸, 반시계/시계 방향이 있음
// 회전하려면, 회전시킬 톱니바퀴와 방향이 필요하다.
// 마주보는 극이 다르면, 회전의 방향이 바뀐다. 극이 같다면 회전하지 않는다

// INPUT
/*
10101111
01111101
11001110
00000010
2
3 -1
1 1
 */
// 1~4 = 톱니바퀴 정의 5 = 회전횟수 6~7 = 회전 방법 ( 회전시킨 톱니, 방향 (1=시계, -1=반시계)
void start(int order, int dir) {
    int rot[4] = {};
    rot[order] = dir;
    // 회전 방향을 기어마다 저장
    // n-1<->n idx = n-1: 6, n: 3
    int seq = order;
    // 왼쪽으로 보내기 (seq-1)
    while (seq > 0 && gear[seq][6] != gear[seq - 1][2]) {
        // 다르니까 돌아가고, 방향도 전환
        rot[seq - 1] = -rot[seq];
        seq--;
    }
    // 오른쪽으로 보내기 (seq+1)
    seq = order;
    while (seq < 3 && gear[seq][2] != gear[seq + 1][6]) {
        rot[seq + 1] = -rot[seq];
        seq++;
    }

    // 방향 지정, 회전 시킬 톱니바퀴를 구했으니 회전을 ㄱ
    for (int i=0; i<4; i++) {
        if (rot[i] == -1) { //반시계
            //rotate -> first to last
            rotate(gear[i].begin(), gear[i].begin()+1, gear[i].end());
        } else if (rot[i] == 1) { //시계 방향
            rotate(gear[i].begin(), gear[i].begin()+7, gear[i].end());
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 4; i++) cin >> gear[i];
    int n;
    cin >> n;
    while (n--) {
        int who, dir;
        cin >> who >> dir;
        start(who-1, dir);
        // 톱니바퀴는 1번부터 입력이 들어오니까 -1을 해주자
    }
    int score = 0;
    for (int i=0; i<4; i++) {
        if (gear[i][0] == '1') score+=pow(2, i);
    }
    cout << score;
}