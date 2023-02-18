#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n, m, k;        //가로, 세로, 개수
int r, c;

int notes[50][50];
int sticker[20][20];

void rotate(){
    int tmp[20][20];        //스티커를 임시로 저장할 tmp배열
    //스티커를 tmp에 복사
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            tmp[i][j] = sticker[i][j];
    //실제로 회전을 하는 코드
    for(int i = 0; i < c; i++)
        for(int j = 0; j < r; j++)
            sticker[i][j] = tmp[r-1-j][i];
    swap(r, c);     // 행, 열의 크기가 반전
}

bool paste(int x, int y) { //스티커를 어디에다가 붙일까 ?
    // 일단 모든 위치를 돈다
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (notes[x+i][y+j] == 1 && sticker[i][j] == 1)
                return false;
        }
    } // 노트북의 임의의 값 (x, y)에 i, k를 더한 값 즉, 스티커의 시작점
          // (0, 0)이 (x, y)에 들어갈 수 있는가를 검사 1-> 값이 있다 = 스티커가 붙어있다
          // 1번 조건은 경계를 확인하고, 2번 조건은 스티커가 붙을 수 있는지 확인한다.
          // 만약 붙일 수 있다면 붙이고, true 반환
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(sticker[i][j] == 1)
                notes[x+i][y+j] = 1;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;
    while (k--) {
        cin >> r >> c;
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                cin >> sticker[i][j];
        for (int dir=0; dir < 4; dir++) { //4방향 회전확인
            bool is_paste = false; //스티커를 붙였는지
            // 노트북의 모든 공간을 도는 코드
            for (int x=0; x <= n-r; x++) {
                if(is_paste) break;     //처음으로 돌아왔을 때, 스티커를 붙인거면 커뚜
                for (int y=0; y <= m-c; y++){
                    if (paste(x, y)) {  //붙이기가 가능하면
                        is_paste = true; //붙이기 가능하다라고 하고, if 문에서 스티커를 붙였음
                        break;
                    }
                }
            }
            //스티커를 못 붙이니까 일단 빙글빙글 해봐... 그 전에, 붙일수 있는 지 다시 확인
            if (is_paste) break;
            rotate();
        }
    }
    // 모든 연산을 끝냈으면, 노트북이 채워져있음
    int cnt=0;
    for (int i = 0; i < n; ++i) {   //노트북에서 1을 찾자
        for (int j = 0; j < m; ++j){
            cnt += notes[i][j]; //노트북의 모든 칸을 돌고 더하기 (붙으면 1, 아니면 0이니까 += 으로 처리)
        }
    }
    cout << cnt << "\n";
}