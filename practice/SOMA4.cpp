#include<bits/stdc++.h>
using namespace std;
#define x first
#define y second

using namespace std;

int main() {
    vector<string> arr;
    int cnt[4] = {0}; // A, B, C, D의 개수 저장
    int n, ans = 0;
    cin >> n;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        arr.push_back(s);
        for(int j=0; j<2; j++) {
            if(s[j] == 'A') cnt[0]++;
            else if(s[j] == 'B') cnt[1]++;
            else if(s[j] == 'C') cnt[2]++;
            else cnt[3]++;
        }
    }

    // 인접한 배열의 문자를 바꾸는 과정
    for(int i=0; i<n-1; i++) {
        if(arr[i][0] != arr[i+1][0] && arr[i][0] != arr[i+1][1]) {
            int j = (cnt[arr[i+1][0]-'A'] > cnt[arr[i+1][1]-'A']) ? 1 : 0;
            cnt[arr[i][0]-'A']--;
            cnt[arr[i+1][j]-'A']--;
            cnt[arr[i+1][1-j]-'A']++;
            swap(arr[i][0], arr[i+1][j]);
            ans++;
        }
        if(arr[i][1] != arr[i+1][0] && arr[i][1] != arr[i+1][1]) {
            int j = (cnt[arr[i+1][0]-'A'] > cnt[arr[i+1][1]-'A']) ? 1 : 0;
            cnt[arr[i][1]-'A']--;
            cnt[arr[i+1][j]-'A']--;
            cnt[arr[i+1][1-j]-'A']++;
            swap(arr[i][1], arr[i+1][j]);
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}