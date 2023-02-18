#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second


int n, m, x, y, d, cnt, room[51][51];
int dx[4] = {-1,0,1,0};
// 후진하니까, 0과 2를 교환
int dy[4] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> x >> y >> d;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> room[i][j];
    while (true) {
        if ( room[x][y] == 0) ++cnt;
        room[x][y] = -1;
        bool clean = false;
        for (int i=0; i<4; i++) {
            d = (d+3) % 4; //시계
            if (room[x+dx[d]][y+dy[d]] == 0) {
                // 시계방향으로 bfs 실행
                x += dx[d];
                y += dy[d];
                clean = true;
                break;
            }
        }
        if (clean) continue;
        // 회전을 끝내고 청소가 됬으면 continue
        if(room[x-dx[d]][y-dy[d]] == 1)
            break;
        // 이동 공간이 벽으로 막힐 경우
        x -= dx[d];
        y -= dy[d];
        // 이동 공간이 있으면 방향을 바꿔서 전진
    }
    cout << cnt;
}