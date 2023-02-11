#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
    //push: 가장 최근 pos에 x값을 추가
    if (pos == 0) {
        dat[pos] = x;
        pos++;
    }
    dat[pos+1] = x;
    pos++;
    //{ dat[pos++] = x; }
}

void pop(){
    //pop: 가장 마지막에 들어간 값을 삭제
    pos--;
}

int top(){
    return dat[pos];
}

void test(){
    push(5); push(4); push(3);
    cout << top() << '\n'; // 3
    pop(); pop();
    cout << top() << '\n'; // 5
    push(10); push(12);
    cout << top() << '\n'; // 12
    pop();
    cout << top() << '\n'; // 10
}

int main(void) {
    test();
}