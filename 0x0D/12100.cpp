#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n;
int original[40][40];
int moved[40][40];

void rotate() {
    int tmp[40][40];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            tmp[i][j] = moved[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            moved[i][j] = tmp[n-1-j][i];
}

void move(int dir){
    while(dir--) rotate();
    for(int i = 0; i < n; i++){
        int tmp[40] = {}; // 임시 배열
        int idx = 0; // 임시 배열의 인덱스
        for(int j = 0; j < n; j++){
            if(moved[i][j] == 0) continue; //움직이기 전 보드의 칸이 0일 경우에는 j++ 후 반복문 재시작
            if(tmp[idx] == 0) // 값을 넣을 자리가 0 -> 값을 넣어도 된다 -> 임시 배열에 값 추가
                tmp[idx] = moved[i][j];
            else if(tmp[idx] == moved[i][j]) // 임시 배열의 값에 같은 값을 추가하려고 하면
                tmp[idx++] *= 2;              // 값을 *2 해주고, idx ++
            else // 임시 배열에 다른 값이 들어오면
                tmp[++idx] = moved[i][j];  // idx를 한칸 보내고, 저장
        }
        for(int j = 0; j < n; j++) moved[i][j] = tmp[j]; // moved[i]에 tmp를 덮어씌움
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> original[i][j];

    int mx = 0; // 나올수 있는 최대값
    for(int a = 0; a < 1024; a++){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                moved[i][j] = original[i][j];   //배열을 받아온다.
        int dir = a;
        for(int i = 0; i < 5; i++){             // 최대 5번 실행이므로
            int cnt = dir % 4;
            dir /= 4;
            move(cnt);
        }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                mx = max(mx, moved[i][j]);
    }
    cout << mx;
}
// 8 8 8 4 -> 16 8 4 0