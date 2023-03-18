#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solution(int price, int money, int count)
{
    ll answer = 0;
    ll sum = 0;
    for (int i=1; i<=count; ++i) {
        sum += i*price;
    }
    if (money-sum >= 0) return 0;
    else answer = abs(money-sum);
    return answer;
}