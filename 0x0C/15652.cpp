#include <bits/stdc++.h>
using namespace std;

// 같은 수를 여러번 골라도됨.
// 예를 들면 1, 1도 가능하다.
// 고른 수열이 비내림차순이여야 한다.
// 예를 들면, 마주보는 두 수가 같거나 앞의 수가 작아야한다.
// 15650 + 15651 문제.

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

    /*
     * 인덱스를 받게 하고, used 체크를 멈춰야한다
     */

    int index;
    index = 1;
    if(k != 0) index = arr[k-1];  // 중복이 가능하므로 +1을 제거
    // 15650 코드를 그대로 가져오면 중복 숫자가 안나오네 ??
    for(int i = index; i <= n; i++) {       // 1부터 n까지
            arr[k] = i;                 // k번째에 i를 담고
            cnt(k+1);                // k+1번째로 재귀 반복 -> 더 이상 가능할 경우의 수가 없을 때까지 -> 조건에 맞춰 수열 출력 -> 이전을 바꿔야함.
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    cnt(0);
}