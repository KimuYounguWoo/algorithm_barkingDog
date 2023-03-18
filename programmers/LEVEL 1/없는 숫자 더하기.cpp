#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    int sum = 45;
    int sums = 0;
    for (int i=0; i<numbers.size(); i++) {
        sums +=  numbers[i];
    }
    answer = 45 - sums;

    return answer;
}