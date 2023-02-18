#include <bits/stdc++.h>
using namespace std;

// n,m인데 중복된 숫자가 들어옴. + 중복 가능


int n,m;
int arr[10001];
bool isused[10001];
int nums[10001];

void cnt(int k){
    if (k == m) {
        for (int i = 0; i < m; ++i) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }   //based condition
//    int index = 0;
//    if ( k != 0 ) index = arr[k-1];         //인덱스는... 전 인덱스를 받아야함.
    // index = 전 index에서 + 1 정확히는 전에 성공한 인덱스에서 +1 -> 함수를 바꿔서 새로 index를 받게하자.
    int check = 0;
    for(int i = 0; i < n; ++i) {       // 1부터 n까지 / 중복 체크를 위해 후처리
        // 중복된 수열을 안 나오게 해야함/...
        if (nums[i] != check) {
            arr[k] = nums[i];                 // k번째에 i를 담고 -> 여기서는 정수를 받기때문에 배열로 처리한다. -> arr이 들어가는 모든 값을 배열을 받게
//            isused[i]=1;
            check = arr[k];
            cnt(k + 1);                // k+1번째로 재귀 반복 -> 더 이상 가능할 경우의 수가 없을 때까지 -> 조건에 맞춰 수열 출력 -> 이전을 바꿔야함.
//            isused[i]=0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums+n); // 수 정렬
    // nums = [9 8 7 1]
    cnt(0);
}