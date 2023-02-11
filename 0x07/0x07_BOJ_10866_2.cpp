#include <bits/stdc++.h>
using namespace std;

/*
 * push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 */

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int line;
    cin >> line;
    deque<int> DQ;
    while (line--) {
        string c;
        cin >> c;
        if (c=="push_back") {
            int data;
            cin >> data;
            DQ.push_back(data);
        } else if (c=="push_front") {
            int data;
            cin >> data;
            DQ.push_front(data);
        }  else if(c=="pop_front") {
            if (DQ.empty()) {cout << -1 << "\n";}
            else {
                cout <<  DQ.front() << "\n";
                DQ.pop_front(); }
        } else if(c=="pop_back") {
            if (DQ.empty()) {cout << -1 << "\n";}
            else {
                cout <<  DQ.back() << "\n";
                DQ.pop_back();}
        } else if(c=="front") {
            if (DQ.empty()) {cout << -1 << "\n";}
            else cout <<  DQ.front() << "\n";
        } else if(c=="back") {
            if (DQ.empty()) { cout << -1 << "\n"; }
            else cout << DQ.back() << "\n";
        } else if (c == "empty") {
            if (DQ.empty()) {cout << 1 << "\n";}
            else cout << 0 << "\n";
        } else if(c=="size") {
            if (DQ.empty()) {cout << 0 << "\n";}
            else cout << DQ.size() << "\n";
        }
    }
}