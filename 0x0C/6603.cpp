#include <bits/stdc++.h>
using namespace std;

int n;
int cas[50], arr[50];
bool isused[50];

// 6자리 숫자의 수열을 다 구해
// 수열 받고, 수열 첫번째 고르고, 그 첫번째로 만들수 있는 6개 ~~
// 반복
// 수열 k의 숫자로로 6자리를 만들어야함
void func(int k) {

    if(k == 6) {
        bool flag = true;
        int tmp = -1;
        for(int i = 0; i < 6; i++){
            if(tmp > cas[arr[i]]) flag = false;
            tmp = cas[arr[i]];
        }

        if(flag){
            for(int i = 0; i < 6; i++)
                cout << cas[arr[i]] << " ";
            cout << "\n";
        }
        return;
    }

    for (int i=0; i < n; i++) {
        if (!isused[i]){
            arr[k] = i;
            isused[i]=1;
            func(k+1);
            isused[i]=0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1) {
        cin >> n;
        if (n==0) break;
        for (int i = 0; i < n; i++) {
            cin >> cas[i];
        }
        func(0);
        fill(cas, cas+n, 0);
        fill(arr, arr+n, 0);
    }
}