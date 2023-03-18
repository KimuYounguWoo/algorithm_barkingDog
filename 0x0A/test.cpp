#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second

int board[7850][7850], tmp[7850][7850];
int ans[3];
bool av = false;
int nd;

// based condtion = 모든 종이의 숫자가 같을 경우
// check -> 종이의 숫자 확인
// 함수의 정의 : nn 배열에서 같은 숫자들을 압축하느 방법
// n=3일때, return 1,-1,0의 개수
// 1. 모든 숫자가 같을 경우 -> 사용 return k
// 2. 숫자가 다를 경우 압축 -> /3 reutrn k/3
//switch (board[i][j]) {
//case -1: ans[0]++;
//case 0: ans[1]++;
//case 1: ans[2]++;
//}
bool check(int x, int y, int n) { //a->n b->x c->y;
    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            if (board[x][y] != board[i][j]) return false;
    return true;
}

int func(int x, int y, int n)
{
    if (z == 3) return 0;
    int q = z / 3;
    // 9 -> 3
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            func(x+i*n, y+j*n)
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> nd;
    for (int i=0; i<nd; i++)
        for (int j=0; j<nd; j++)
            cin >> board[i][j];
    for (int an : ans) {
        cout << an << '\n';
    }
}