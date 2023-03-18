#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true) {
        string input;
        getline(cin, input);
        if (input == ".") {break;}
        bool ok = true;
        stack<char> S;
        for (auto c : input) {
            if(c == '(' || c == '[') S.push(c);
            else if(c == ')'){
                if(S.empty() || S.top() != '(') {
                    ok = false;
                    break;
                }
                S.pop();
            }
            else if ( c == ']') {
                if(S.empty() || S.top() != '[') {
                    ok = false;
                    break;
                }
                S.pop();
            }
        }
        if(!S.empty()) ok = false;
        if(ok) cout << "yes\n";
        else cout << "no\n";
    }
}