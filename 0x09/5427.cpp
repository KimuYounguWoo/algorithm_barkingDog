#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int t, w, h;
int board[1005][1005];
int visf[1005][1005];
int viss[1005][1005];
pair<int, int> start;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    for (int tt=0; tt< t; tt++) {
        bool esc = false;
        queue<pair<int, int>> QF = {}, QS = {};
        cin >> h >> w;
        for (int i = 0; i < w; i++) {
            fill(visf[i], visf[i] + h, 0);
            fill(viss[i], viss[i] + h, 0);
        }
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                char c;
                cin >> c;
                if (c == '#') board[i][j] = -1;
                else {
                    if (c == '@') {
                        QS.push({i, j});
                        viss[i][j] = 1;
                    }
                    else if (c == '*') {
                        QF.push({i, j});
                        visf[i][j] = 1;
                    }
                    board[i][j] = 0;
                }
            }
            }
        while (!QF.empty()) {
            auto v = QF.front();
            QF.pop();
            for (int k = 0; k < 4; k++) {
                int nx = v.X + dx[k];
                int ny = v.Y + dy[k];
                if (nx < 0 || w <= nx || ny < 0 || h <= ny) continue;
                if (board[nx][ny] == -1) continue;
                if (visf[nx][ny]) continue;
                visf[nx][ny] = visf[v.X][v.Y] + 1;
                QF.push({nx, ny});
            }
        }
        while ((!QS.empty()) && (!esc)) {
            auto v = QS.front();
            QS.pop();
            for (int k = 0; k < 4; k++) {
                int nx = v.X + dx[k];
                int ny = v.Y + dy[k];
                if (nx < 0 || w <= nx || ny < 0 || h <= ny) {
                    cout << viss[v.X][v.Y] << '\n';
                    esc = true;
                    break;
                }
                if (board[nx][ny] == -1) continue;
                if (viss[nx][ny]) continue;
                if (visf[nx][ny] != 0 && visf[nx][ny] <= viss[v.X][v.Y] + 1) continue;
                viss[nx][ny] = viss[v.X][v.Y] + 1;
                QS.push({nx, ny});
            }
        }
        if (!esc) cout << "IMPOSSIBLE" << '\n';
    }
}
