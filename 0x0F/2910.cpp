#include <bits/stdc++.h>
using namespace std;
#define cnt first
#define nums second

int n, c, input;
vector<pair<int, int>> v;
// ( 수, 빈도 )
bool compare(pair<int, int> a, pair<int, int> b) {
    return a.cnt > b.cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        cin >> input;
        bool check = 0;
        for ( auto &k : v) {
            if (k.nums == input) {
                check = 1;
                k.cnt++;
                break;
            }
        }
        if (!check) v.push_back({1, input});
    }
    sort(v.begin(), v.end(), compare);
    for (auto z : v)
        while (z.cnt--) cout << z.nums << ' ';}