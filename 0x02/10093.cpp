#include <bits/stdc++.h>
using namespace std;

int main() {
    clock_t start, finish;
    double duration;

    start = clock();
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a, b;
    cin >> a >> b;
    if (a>b) swap(a,b);        //a를 가장 크게 할
    if (a == b || b - a == 1) cout << 0;
    else {
        cout << b - a - 1 << "\n";
        for(long long i = a+1; i < b; i++)
            cout << i << " ";
    }
    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << duration << "sec" << endl;
}