#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
// 사무실은 N*M 크기의 직 사각형
// K개의 CCTV 설치되어 있음
// CCTV는 5종류로
// 1. dx (+1)
// 2. dx (+1, -1)
// 3. dx (+1), dy (+1)
// 4. dx (+1, -1), dy (+1)
// 5. dx (+1 , -1), dy (+1, -1)
// CCTV는 회전이 가능하다. (90도로만)
// 사무실 보드에서 0 -> 빈칸 (1~5) -> CCTV 6 -> 벽
// CCTV는 벽을 통과할 수 없다. CCTV는 통과 가능
// 사각지대의 최소 크기를 구해라

int room[9][9];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int N, M;

int check[9][9];

vector<pair<int,int> > cctv;

bool bound(int a, int b){
    return a < 0 || a >= N || b < 0 || b >= M;
    // 경계를 넘어갔는가 ?
}

void watch(int x, int y, int dir) {
    dir %= 4;   //CCTV의 방향을 4로 나눈 나머지
    //CCTV의 종류를 정하고
    while (1) { //무한루프
        x += dx[dir];   //이동
        y += dy[dir];   //이동
        if (bound(x, y) //경계를 넘어갔거나
                || check[x][y] == 6 //벽을 마주하면
        ) return;// 도망가자
        if (check[x][y] != 0) continue; //사각지대를 표시하는 배열에서 0이 아니다
        // -> CCTV가 있거나, 벽이 있다 -> 빈칸이 아니다 -> 넘어감
        check[x][y] = 9;    //빈칸을 다른 숫자로 전환
    }
} // watch는 (x, y) 좌표에서 사각지대를 찾을 때 사용한다.
// 9 -> 사각지대가 됨

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    int mins = 0; // 사각 지대의 최소 크기
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> room[i][j];  //방 입력 대입
            if(room[i][j] != 0 && room[i][j] != 6)  //CCTV인 1~5 -> cctv 리스트에 추가
                cctv.push_back({i,j});
            if(room[i][j] == 0) mins++;             //빈칸 -> 사각지대의 크기
        }
    }
    for(int tmp = 0; tmp < (1<<(2*cctv.size())); tmp++) {
    // cctv가 확인할 수 있는 모든 방향을 확인하기 위해 4진법을 사용한다.
    // 원래는 tmp < 64 -> 4진법을 사용하기 위해 1 << (2*cctv.size()))로 바꾼다
    // 4진법
        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
                check[i][j] = room[i][j];
        // 현재 사무실 구조를 받아옴.
        int brute = tmp;
        for(int i = 0; i < cctv.size(); i++){
            int dir = brute % 4;
            brute /= 4;
            // 4진법을 사용했기에 방향을 설정한다.
            int x = cctv[i].X;
            int y = cctv[i].Y;
            // CCTV의 현재 좌표 설정
            // 이후 모든 연산은 4방향으로 돌아감
            switch(room[x][y])
            {
                case 1: watch(x,y,dir); break;//방향은 하나만 확인함
                case 2: watch(x,y,dir);
                        watch(x,y,dir+2); break; // 2방향 (xx)
                case 3: watch(x,y,dir);
                        watch(x,y,dir+1); break; // 2방향 (xy)
                case 4: watch(x,y,dir);
                        watch(x,y,dir+1); // 3방향
                        watch(x,y,dir+2); break;
                case 5: watch(x,y,dir);
                        watch(x,y,dir+1);
                        watch(x,y,dir+2); // 4방향
                        watch(x,y,dir+3); break;
            }
        }
        int val = 0;
        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
                val += (check[i][j]==0);
        mins = min(mins, val);
        // 모든 빈칸의 개수와 cctv가 갈 수 있는 빈칸의 개수를 비교
    }
    cout << mins;
}