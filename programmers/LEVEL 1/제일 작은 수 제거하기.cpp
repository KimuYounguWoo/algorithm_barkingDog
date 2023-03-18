#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int minn = 0;
    for (int i=0; i<arr.size(); i++) {
        answer.push_back(arr[i]);
    }
    sort(arr.begin(), arr.end());
    minn = arr[0];
    for (int i=0; i<arr.size(); i++) {
        if (answer[i] == minn) answer.erase(answer.begin() + i);
        if (answer.empty()) answer.push_back(-1);
    }
    return answer;
}