#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[55][55];      //도시
int n, m;
vector<pair<int,int>> chicken;  //치킨집
vector<pair<int,int>> house;    //집

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> board[i][j];
            if(board[i][j] == 1) house.push_back({i, j});
            if(board[i][j] == 2) chicken.push_back({i, j});
        }
    }
    vector<int> brute(chicken.size(), 1);       //모든 배열의 값을 1로 채운 치킨집 개수만큼의 배열
    fill(brute.begin(), brute.begin() + chicken.size() - m, 0);
    // 위 배열에서 치킨집 - 폐업하지 않을 치킨집을 한 값의 인덱스의 값은 0으로 채운다.
    int res = 99999;
    do{
        int dist = 0; // 치킨과 집까지의 거리
        for(auto h : house){
            int tmp = 99999; // 집 1 에서 치킨집까지의 거리
            for(int i = 0; i < chicken.size(); i++){    //를 반복문을 통해 구하고
                if(brute[i] == 0) continue;             //이게 만약 폐업할 치킨 집이면 넘어가고
                tmp = min(tmp, abs(chicken[i].X - h.X) + abs(chicken[i].Y - h.Y));
                // 폐업하지 않을 치킨집이면  거리를 구한다.
            }
            dist += tmp;
        }
        res = min(res, dist);
        // 거리의 최소값을 구함
    }while (next_permutation(brute.begin(), brute.end()));
    cout << res;
}