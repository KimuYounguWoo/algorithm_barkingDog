#include <bits/stdc++.h>
using namespace std;


int main() {
    int a;
    cin >> a;
    int m[a], y[a];
    int ysum= 0, msum = 0;
    for (int i=0; i<a; i++){
        int b;
        cin >> b;
        m[i] = ((b/60)+1)*15;
        y[i] = ((b/30)+1)*10;
        }
    for (int i=0; i<a; i++){
        ysum += y[i];
        msum += m[i];
    }
    if (ysum == msum) {
        cout << "Y M " << ysum;
    } else if (ysum > msum) {
        cout << "M " << msum;
    } else {cout << "Y " << ysum;}

}