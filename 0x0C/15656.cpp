#include <bits/stdc++.h>
using namespace std;

// 15654 + 오름 차순 정렬 + 중복 가능 (uses 제거)


int n,m;
int arr[10];
bool isused[10];
int nums[10001];

void cnt(int k){
    if(k == m){
        for(int i = 0; i < m; i++)
            cout << nums[arr[i]] << ' ';
        cout << '\n';
        return;
    }   //based condition
//    int index = 0;
//    if ( k != 0 ) index = arr[k-1] + 1;
    for(int i = 0; i < n; i++) {       // 1부터 n까지
            arr[k] = i;                 // k번째에 i를 담고 -> 여기서는 정수를 받기때문에 배열로 처리한다. -> arr이 들어가는 모든 값을 배열을 받게
            cnt(k + 1);                // k+1번째로 재귀 반복 -> 더 이상 가능할 경우의 수가 없을 때까지 -> 조건에 맞춰 수열 출력 -> 이전을 바꿔야함.
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> nums[i];
    sort(nums, nums+n); // 수 정렬
    // nums = [9 8 7 1]
    cnt(0);
}