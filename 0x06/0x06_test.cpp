#include <bits/stdc++.h>
using namespace std;

/*
 * push, pop은 각각 삽입과 삭제를 하는 함수이고 front, back은 각각 제일 앞쪽의 원소 확인과 제일 뒷쪽의 원소를 반환하는 함수입니다
 */

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x){
    dat[tail++] = x;
}

void pop(){
    head++;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail-1];
}

void test(){
    push(10); push(20); push(30);
    cout << front() << '\n'; // 10
    cout << back() << '\n'; // 30
    pop(); pop();
    push(15); push(25);
    cout << front() << '\n'; // 30
    cout << back() << '\n'; // 25
}

int main(void) {
    test();
}