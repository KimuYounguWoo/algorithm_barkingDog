#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        vector<pair<int,int>> v(n+m);
        // A, B의 총 개수
        // EX) A ( 1 2 3 ) B ( 2 4 )
        // v의 크기는 5개
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            v[i] = {a, 0};
        }   //A 설정
        for(int i = n; i < n+m; i++){
            int b;
            cin >> b;
            v[i] = {b, 1};
        }   //B 설정
        // v는 ( { A0 A1 A2 ... } + { B0 B1 B2 ... } )

        sort(v.begin(), v.end());
        // 크기 순으로 정렬
        int res = 0;
        int cnt = 0;
        for(int i = 0; i < n+m; i++){
            // V의 크기만큼
            if(v[i].Y == 0) // 현재 반복중인 수가 A일 경우
                res += cnt; // 답에 카운트를 추가
            else            // 현재 반복중인 수가 B일 경우
                cnt++;      // +1
        }
        // v를 가정해보자
        // A {8 1 7 3 1} B {3 6 1}
        // v = {8 1 7 3 1 3 6 1}
        // sort -> {8 7 6 3 3 1 1 1} 이고
        // 여기서 숫자가 A의 것인지를 확인하고, A일 경우에는 이후에 나오는 인자들이 A의 것이 아니라면, 모두 잡아먹는다.
        // 1. 8 -> A { 0 += 0 }
        // 2. 7 -> A { 0 += 0 }
        // 3. 6 -> B { ++1 }
        // ....
        cout << res << '\n';
    }
}