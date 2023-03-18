#include <bits/stdc++.h>

using namespace std;

vector<int> tmp;

long long solution(long long n) {
    long long answer = 0;
    while(n!=0) {
        tmp.push_back(n%10);
        n /= 10;
    }
    sort(tmp.begin(), tmp.end());
    for (int i=0; i<tmp.size(); i++) {
        cout << tmp[i];
        answer += pow(10, i) * tmp[i];
    }
    return answer;
}