#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second
// 집합 A - B 를 구하자
// 출력은 원소 개수 + 원소
int A[500005], B[500005];
vector<int> ans;
int n, m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> A[i];
    for (int i=0; i<m; i++) cin >> B[i];
    sort(A, A+n);
    sort(B, B+n);
    // 개수는 탐색, 원소는 인덱스
    for (int num : A) {
        if (binary_search(B, B+m, num)) continue;
        ans.push_back(num);
    }
    cout << ans.size() << "\n";
    for (int num : ans) cout << num << " ";
}