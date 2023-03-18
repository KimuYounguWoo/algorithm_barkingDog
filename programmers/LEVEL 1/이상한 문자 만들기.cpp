#include <bits/stdc++.h>
using namespace std;
// +32 대->소

string solution(string s) {
    int idx = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            idx=0;
            continue;
        }
        if(idx%2){
            if(s[i] <= 'Z') s[i]+=32;
        }
        else{
            if(s[i] >= 'a') s[i]-=32;
        }
        idx++;
    }
    return s;
}