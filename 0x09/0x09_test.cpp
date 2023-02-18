#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용

int board[502][502] =
        {{1,1,1,0,1,0,0,0,0,0},
         {1,0,0,0,1,0,0,0,0,0},
         {1,1,1,0,1,0,0,0,0,0},
         {1,1,0,0,1,0,0,0,0,0},
         {0,1,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0} }; // 1이 파란 칸, 0이 빨간 칸에 대응


bool vis[502][502]; // 해당 칸을 방문했는지 여부를 저장

int n = 7, m = 10; // n = 행의 수, m = 열의 수

int dx[4] = {1,0,-1,0};

int dy[4] = {0,1,0,-1}; // 상하좌우 네 방향을 의미

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> Q;
    vis[0][0]=1;
    Q.push({0,0});
    while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            // 만약, 가까운 좌표들이 음수를 가지거나, 행이나 열의 수보다 클 경우에는 for문을 탈출해 while 문으로 간다.
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            // 이미 방문한 칸이거나 파란 칸이 아닐 경우
            // 이 두 조건을 전부 만족한 경우는 -> 1. 방문하지 않았고, 파란 칸이기에 방문을 해야한다
            vis[nx][ny] = 1;
            Q.push({nx, ny});


        }
    }
}