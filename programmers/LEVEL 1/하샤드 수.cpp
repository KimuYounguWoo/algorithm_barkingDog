#include <bits/stdc++.h>
using namespace std;
vector<int> tmp;
bool solution(int x) {
    int sum = 0;
    int tmps = x;
    bool answer = true;
    while (x!=0) {
        tmp.push_back(x%10);
        x/=10;
    }
    for (int i=0; i<tmp.size(); i++) {
        sum += tmp[i];
    }
    if ((tmps%sum) == 0) answer=true;
    else answer = false;
    return answer;
}