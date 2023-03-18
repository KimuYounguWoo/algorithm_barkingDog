#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int vis[305][305];
int dx[8] = { 2,1,-1,-2, -2, -1, 1, 2 };
int dy[8] = { 1,2,2,1, -1, -2, -2, -2 };
int t, n, st, ed, x, y;
queue <pair<int, int >> q;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) fill(vis[i], vis[i] + n, -1);
        cin >> st >> ed;
        vis[st][ed] = 0;
        q.push({st, ed});
        cin >> x >> y;
        while (!q.empty()) {
            auto cur = q.front(); q.pop();
            for (int d=0; d<8; d++){
                int nx = cur.X + dx[d];
                int ny = cur.Y + dy[d];
                if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                if (vis[nx][ny] >= 0) continue;
                vis[nx][ny] = vis[cur.X][cur.Y]+1;
                q.push({nx, ny});
            }
        }
        cout << vis[x][y] << '\n';

    }
}