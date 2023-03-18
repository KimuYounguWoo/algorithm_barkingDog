#include <bits/stdc++.h>
using namespace std;





int t, n;
int num[15], arr[15];
bool isused[15];

void bt(int k) {
    if (k == 6) {
        bool flag = true;
        int tmp = -1;
        for (int i=0; i<6; i++){
            if (tmp > num[arr[i]]) flag = false;
            tmp = num[arr[i]];
        }
        if(flag){
            for(int i = 0; i < 6; i++)
                cout << num[arr[i]] << " ";
            cout << "\n";
        }
        return;
    }
    for (int i=0; i<n; i++) {
        if (!isused[i]){
            arr[k]= i;
            isused[i] = 1;
            bt(k+1);
            isused[i] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        cin >> n;
        if (n==0) break;
        for (int i=0; i<n; i++) {
            cin >> num[i];
        }
        bt(0);
        cout << "\n";
        fill(num, num+n, 0);
        fill(arr, arr+n, 0);
    }

}