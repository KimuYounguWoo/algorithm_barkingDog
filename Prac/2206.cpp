#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second


char n, m;
vector<pair<char, char>> trans;

int ccc[5][5][2][2];
// 인덱스 [i]의 {X or Y}에서 올바른 문자열을 맞추기위해 인덱스 [j] {X or Y}와 교환한 횟수 저장

bool checkss(vector<pair<char, char>> vs) {
    int sizes = trans.size();
    bool ddd;
    for (int i=0; i<sizes; i++) {
        if (vs[i].x == vs[i].y) {
            ddd = true;}
        else {
            ddd = false;
        }
    }
    return ddd;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 0;
    for (int i=0; i<4; i++) {
        string tmp;
        cin >> tmp;
        trans.push_back({tmp[0], tmp[1]});
    }
    for (int i=0; i<4; i++) {
        cout << trans[i].x << " " << trans[i].y << '\n';
    }
    int sizes = trans.size();
    for (int i=0; i<sizes; i++) {
        if(trans[i].x != trans[i].y) {
            for (int j=i; j<sizes; j++) {
                if (trans[i].x == trans[j].x) {
                    ccc[i][j][0][0] += j-i;
                }
                if (trans[i].x == trans[j].y) {
                    ccc[i][j][0][1] += j-i;
                }
                if (trans[i].y == trans[j].x) {
                    ccc[i][j][1][0] += j-i;
                    }
                if (trans[i].y == trans[j].y) {
                    ccc[i][j][1][1] += j-i;
                    }
                int tmp = min({ccc[i][j][0][0], ccc[i][j][0][1], ccc[i][j][1][0], ccc[i][j][1][1]});
                cnt += tmp;
                            }
        }
    }    
            for (int i=0; i<4; i++) {
        cout << trans[i].x << " " << trans[i].y << '\n';
    }
}