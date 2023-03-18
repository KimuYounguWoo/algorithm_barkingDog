#include <bits/stdc++.h>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int sizes = arr.size();
    int sum;
    for (int i=0; i<sizes; i++) answer += arr[i];
    answer /= sizes;

    return answer;
}