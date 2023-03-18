#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int x = 0;
    while (n!=0) {
        x++;
        if (n%x == 1) break;
    }
    int answer = x;
    return answer;
}