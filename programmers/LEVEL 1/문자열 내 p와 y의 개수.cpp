#include<bits/stdc++.h>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int ps = 0;
    int ys = 0;
    for (auto c : s) {
        if ( (c+0) == ('p' + 0) || (c+0) == ( 'P' +0 )) {ps++;}
        if ( (c+0) == ('y' + 0) || (c+0) == ( 'Y' +0 )) {ys++;}
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    if (ps == ys) answer = true;
    else answer = false;

    return answer;
}