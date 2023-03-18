#include <bits/stdc++.h>
using namespace std;



int n, m;
int space[105][10005];
// m개의 우주 안에 n개의 행성이 있음
// 서로 다른 우주가 균등하려면
// 두 우주는 오름차순 정렬이여야한다
// {우주의 개수, 우주에 있는 행성의 개수를 받는다
//
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++) cin >> space[i][j];


}