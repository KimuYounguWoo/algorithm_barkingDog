#include <bits/stdc++.h>
using namespace std;
/* Input
명령의 수 N
 명령 목록
 */
/* 구현해야 할 명령
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int> test;
    while (n--) {
        string command;
        cin >> command;
        if (command == "push") {
            int data;
            cin >> data;
            test.push(data);
        } else if (command == "pop") {
            if (test.empty()) cout << -1 << '\n';
            else {
                cout << test.top() << '\n';
                test.pop();
            }
        } else if (command == "size")
            cout << test.size() << '\n';
        else if (command == "empty")
            cout << (int) test.empty() << '\n';
        else {
            if (test.empty()) cout << -1 << '\n';
            else cout << test.top() << '\n';
        }
    }
}