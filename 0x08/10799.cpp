#include <bits/stdc++.h>
typedef long long ll;
using namespace std;



int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input;
    int ans = 0;
    stack<char> S;
    cin >> input;
    int len = input.length();
    for (int i = 0; i < len; i++) {
        if (input[i]=='(')
            S.push(input[i]);
        else {
            if (input[i-1] == '(') { // 레이저일 경우
                S.pop(); // 앞에서 막대라고 착각하고 stack에 s[i]를 넣었으므로 pop
                ans+=S.size(); // 막대의 개수만큼 ans에 추가
            }
            else { // 막대의 끝일 경우
                S.pop();  // 막대의 개수를 1 감소
                ans++; // 막대 1개가 절단된 것과 동일한 상황이므로 ans에 1 추가
            }
        }
    }
    cout << ans << "\n";
    return 0;
}