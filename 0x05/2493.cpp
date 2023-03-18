#include <bits/stdc++.h>
using namespace std;

int N;
stack<pair<int,int>> S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    S.push({100000001, 0});
    for (int i = 1; i <= N; i++) {
        int height;
        cin >> height;
        while (S.top().first < height)
            S.pop();
        cout << S.top().second << " ";
        S.push({height, i});
    }
}