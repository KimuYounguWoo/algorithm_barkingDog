#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d, count;

    char abc[5];
    abc[4] = 'D';
    abc[3] = 'C';
    abc[2] = 'B';
    abc[1] = 'A';
    abc[0] = 'E';
    for (int r = 0; r < 3; r++) {
        count = 0;
        cin >> a >> b >> c >> d;
        int ab[4]; ab[0] = a; ab[1] = b; ab[2] = c; ab[3] = d;
        for (int i = 0; i < 4; i++) {
            if (ab[i] == 0) count++;
        }
        cout << abc[count] << "\n";
    }
}