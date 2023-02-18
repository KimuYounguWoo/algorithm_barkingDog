#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n, x, y, d, g;
int board[105][105];
int cnt = 0;
// 시작점, 방향, 세대


// 1번 커브 ->
// 2번 커브's d2 = d+1%4
// 3번 커브's d3 = d2+1%4;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while (n--) {
        cin >> x >> y >> d >> g;
        vector<int> v;
        v.push_back(d%4);
        // 현재 드래곤 커브의 방향 추가
        board[y][x] = 1;
        // 드래곤 커브의 종착점을 1로 설정

        while (g--) {
            // 세대가 0이 될때 까지 반복
            int siz = v.size();
            // 세대가 바뀔 때마다, 방향이 바뀜
            for (int i = siz-1; i>=0; i--) {
                v.push_back((v[i]+1)%4);
                // 드래곤 커브의 방향의 수만큼 새 방향 추가
            }
        }

        int i;
        for (i = 0; i < v.size(); i++) {
            int dir = v[i];
            // 드래곤 커브가 갈 방향을 받고
            switch (dir) {
                case 0: x++; break;
                case 1: y--; break;
                case 2: x--; break;
                case 3: y++; break;
                default: board[y][x] = 1;
            }
            board[y][x] = 1;
        }
    }
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(!board[i][j]) continue;
            // 만약 보드가 비어있으면 다음으로
            if(board[i+1][j] && board[i][j+1] && board[i+1][j+1]) cnt++;
            // 현재 좌표에서 +1/+0 , +0/+1, +1/+1 이면 정사각형을 이루는 것이기에 cnt를 추가
        }
    }
    cout << cnt;

}