#include <bits/stdc++.h>
using namespace std;

vector<int> tmp;
int solution(int n) {
    int answer = 0;
    while (n!=0) {
        tmp.push_back(n%3);
        n /= 3;
        }
    for (int i=0; i<tmp.size(); i++) {
        answer += tmp[i]*pow(3, tmp.size()-i-1);
    }
    return answer;
}