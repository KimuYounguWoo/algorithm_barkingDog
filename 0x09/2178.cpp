#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int vis[101][101] = {0, };
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    int n, m;
    cin >> n >> m;
    string board[101];
    int dist[101][101];
    for(int i = 0; i < n; i++) fill(dist[i],dist[i]+m,-1);
    for (int i=0; i<n; i++) {
            cin >> board[i];
    }
    queue<pair<int, int>> Q;
    Q.push({0,0});
    dist[0][0] = 0;
    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = dx[dir] + cur.X;
            int ny = dy[dir] + cur.Y;
            if (nx<0 || ny<0 || nx >= n || ny >= m) continue;
            if (dist[nx][ny] >= 0 || board[nx][ny] != '1') continue;
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            Q.push({nx, ny});
        }
    }
    cout << dist[n-1][m-1]+1;
}