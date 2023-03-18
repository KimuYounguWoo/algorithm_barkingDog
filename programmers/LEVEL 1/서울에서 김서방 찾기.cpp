#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string a = "김서방은 ";
    string b = "에 있다";
    int index = 0;
    for (int i=0; i<seoul.size(); i++) {
        if (seoul[i] == "Kim") index = i;
    }
    answer = a + to_string(index) + b;
    return answer;
}