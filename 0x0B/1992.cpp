#include <bits/stdc++.h>
using namespace std;

int board[65][65];
int N;

bool check(int n, int x, int y) {
    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            if (board[x][y] != board[i][j])
                return false;
    return true;
}


void func(int n, int x, int y) {
    if (!check) {

    }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

}
