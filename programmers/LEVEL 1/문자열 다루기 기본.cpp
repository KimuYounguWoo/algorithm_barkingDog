#include <bits/stdc++.h>
using namespace std;

bool solution(string s) {
    const size_t length = s.length();
    if(length != 4 && length != 6)
    {
        return false;
    }

    for(size_t i=0; i<length; ++i)
    {
        if(!(s[i] >= '0' && s[i] <= '9'))
        {
            return false;
        }
    }

    return true;
}