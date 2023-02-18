#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10];
bool isused[10];

void cnt(int k){
    if(k == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }   //based condition

    for(int i = 1; i <= n; i++) {       // 1부터 n까지
        if(!isused[i]){                 // 이 항목이 사용하지 않았다면
            arr[k] = i;                 // k번째에 i를 담고
            isused[i] = 1;              // used에 체크를 한 후
            cnt(k+1);                // k+1번째로 재귀 반복 -> 더 이상 가능할 경우의 수가 없을 때까지
            isused[i] = 0;              // 모든 재귀가 끝났으니 다시 사용중을 해제
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    cnt(0);
}