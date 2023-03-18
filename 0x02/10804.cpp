#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[20];
    for (int i=0; i<20; i++) a[i]=i+1;
    for (int i=0; i<10; i++)
    {
        int b, e;
        cin >> b >> e;      //if 1 2 3 4 / 2 3 / 1 3 2 4 / a+1 = 2 a+2
        reverse(a+b-1, a+e);    //a+4, a+9 0 1 2 3 4 / 1 2 3 4 5
    }
    for (int i=0; i<20; i++) {cout << a[i] << " ";}
}