#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

bool isBoom; // 터졌는지 여부
bool vis[12][6]; // 필드 방문 여부
string board[12]; // 필드 상태
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int cnt;

void reset(){
    for(int i = 0; i < 12; ++i)
        for(int j = 0; j < 6; ++j)
            vis[i][j] = false;
}

//bfs로 같은 색깔의 뿌요를 찾고 터뜨리는 함수
void boom(int x, int y) {
    vis[x][y] = true; //방문한다.
    char puyo = board[x][y];    //현재 뿌요의 종류
    queue<pair<int, int> > q;   // bfs 탐색을 위한 큐
    vector<pair<int, int>> tmp; // 4개 이상인 뿌요를 지워야 하는데 그 위치
    q.push({x, y});
    tmp.push_back({x, y});
    // 현재 위치를 큐에 박고, tmp에 위치를 추가
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            //bfs 탐색
            if (nx < 0 || nx >= 12 || ny < 0 || ny >= 6) continue;
            // 빈 칸이거나 다른 종류일 경우 무시
            if (vis[nx][ny] || board[nx][ny] == '.' || board[nx][ny] != puyo) continue;
            vis[nx][ny] = true;
            q.push({nx, ny});
            tmp.push_back({nx, ny});
        }
    }// 탐색
    // 삭제는 4개 이상 연결될 경우니까 tmp가 4개 이상이 되면 삭제
    if (tmp.size() >= 4) {
        isBoom = true;
        for(auto cur : tmp)
            board[cur.X][cur.Y] = '.';
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 12; ++i)
        cin >> board[i];
    do {    // 뿌요를 일단 터뜨리자.
        isBoom = false;
        for (int i = 0; i < 6; ++i) {
            for (int j = 10; j >= 0; --j) {
                int tmp = j;
                // 줄 안의 내용들
                while ( (tmp < 11) && (board[tmp + 1][i] == '.')) {
                    swap(board[tmp][i], board[tmp + 1][i]);
                    ++tmp;
                }   //빈칸들을 위로 올린다.
            }
        }
        // isBoom = false 처리
        for (int i = 0; i < 12; ++i)
            for (int j = 0; j < 6; ++j)
                if (!vis[i][j] && board[i][j] != '.')
                    boom(i, j);
        if (isBoom) {
            cnt += 1;
        }
        reset();
    } while (isBoom);
    cout << cnt;
}