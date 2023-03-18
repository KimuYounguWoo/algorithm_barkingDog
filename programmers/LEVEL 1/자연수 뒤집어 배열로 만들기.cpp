#include <bits/stdc++.h>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    cout << n%10;
    while (n!=0) {
        answer.push_back(n%10);
        n/=10;
    }
    return answer;
}