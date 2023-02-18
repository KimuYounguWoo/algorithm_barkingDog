#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int vis[501][501] = {0, };
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    int n, m;
    cin >> n >> m;
    int board[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> board[i][j];
        }
    }
    int mx = 0;
    int num = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (board[i][j] == 0 || vis[i][j]) continue;
            num++;      //그림의 시작 점이니까,,
            vis[i][j]=1;
            queue<pair<int, int>> Q;
            Q.push({i, j});
            int area= 0;
            while (!Q.empty()) {
                area++;
                pair<int, int> cur =Q.front(); Q.pop();
                for (int dir = 0; dir < 4; dir++) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                if (vis[nx][ny] || board[nx][ny] != 1) continue;
                vis[nx][ny] = 1;
                Q.push({nx, ny});
                }
            }
            mx = max(mx, area);
        }
    }
    cout << num << "\n" << mx;
}