#include <bits/stdc++.h>
using namespace std;

void pattern(int i, int j, int n) {
    if ( (i/n)%3 == 1 && (j/n)%3 == 1) cout << ' ';
    else {
        if(n/3==0) cout << '*';
        else pattern(i, j, n/3);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) pattern(i, j, N);
        cout << '\n';
    }

}
