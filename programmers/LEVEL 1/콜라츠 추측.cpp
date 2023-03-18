#include <string>
#include <vector>
#define ll long long
using namespace std;

int solution(int nums) {
    ll answer = 0;
    ll num = nums;
    while (num != 1) {
        if (num % 2 == 0) {
            num = num / 2;
        }
        else {
            num = (num * 3) + 1;
        }
        answer++;
    }
    if (answer >= 500) return -1;
    else return answer;

}