#include <bits/stdc++.h>

using namespace std;

vector<char> tmp;
string solution(string s) {
    string answer = "";
    if (s.size() % 2 == 0) {
        answer = s.substr(s.size()/2-1, 2);
    } else {
        answer = s.substr(s.size()/2, 1);
    }
    return answer;
}