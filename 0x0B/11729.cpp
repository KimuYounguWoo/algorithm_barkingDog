#include <bits/stdc++.h>
using namespace std;

void func(int begin, int end, int count) {
    if(count == 1){     //based conditiom
        cout << begin << ' ' << end << '\n';
        return;
    }
    func(begin, 6-begin-end, count-1);
    cout << begin << ' ' << end << '\n';
    func(6-begin-end, end, count-1);
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    cout << (1<<a) - 1 << '\n';
    func(1, 3, a);
}
