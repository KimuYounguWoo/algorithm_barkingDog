#include <bits/stdc++.h>
using namespace std;

// 오름차순인 수열을 골라야 한다.

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
     *  오름차순으로 정렬을 하기 위한 코드가 필요
     * 오름차순 -> 낮은 숫자부터 배치
     *  2,1 == 1,2 <- X
     *
     */
    int index;
    index = 1;
    if(k != 0) index = arr[k-1] + 1;  // abc -> i가 되고, i는 현재 접근하려는 배열의 전 인덱스니까 + 1
    for(int i = index; i <= n; i++) {       // 1부터 n까지
        if(!isused[i]){                 // 이 항목이 사용하지 않았다면
            arr[k] = i;                 // k번째에 i를 담고
            isused[i] = 1;              // used에 체크를 한 후
            cnt(k+1);                // k+1번째로 재귀 반복 -> 더 이상 가능할 경우의 수가 없을 때까지 -> 조건에 맞춰 수열 출력 -> 이전을 바꿔야함.
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