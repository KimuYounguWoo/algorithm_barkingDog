#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // 1
    int a;
    cin >> a;
    bool first;
    bool second;
    bool result;
    first = a % 400 == 0;
    second = (a%4)==0 && (a%100)!=0;
    result = first || second;
    cout << result;
}