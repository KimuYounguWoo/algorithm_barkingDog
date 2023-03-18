#include <bits/stdc++.h>

using namespace std;

int yaksu(int x) {
    int cnt = 0;
    for (int i=1; i<=x; ++i) {
        if (x%i == 0) cnt++;
    }
    return cnt;
}

int solution(int left, int right) {
    int answer = 0;

    for (int i=left; i<right+1; i++) {
        cout << i << "의 약수의 개수는 " << yaksu(i) << "\n";
        if (yaksu(i) % 2 == 0) answer += i;
        else answer -= i;
    }


    return answer;
}