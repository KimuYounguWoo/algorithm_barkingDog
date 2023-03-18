#include <bits/stdc++.h>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int d = max({a, b});
    int c = min({a, b});
    for (int i=c; i<=d; i++) {
        answer += i;
    }
    return answer;
}