#include <bits/stdc++.h>
using namespace std;

int num[9];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int max = 0;
    int mx = 0;
    for (int i=0; i<9; i++) cin >> num[i];
    for (int i=0; i<9; i++) {
        if (num[i] >= max){
            max=num[i];
            mx=i;
        }
    }
    cout << max << "\n" << mx+1;
}