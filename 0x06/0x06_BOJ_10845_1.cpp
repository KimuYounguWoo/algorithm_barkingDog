#include <bits/stdc++.h>
using namespace std;


/*push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.*/

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int line;
    cin >> line;
    queue<int> Q;
    while (line--) {
        string command;
        cin >> command;
        if (command == "push") {
            int data;
            cin >> data;
            Q.push(data);
        } else if (command == "pop") {
            if (Q.empty()) { cout << -1 << "\n";}
            else {
                cout << Q.front() << "\n";
                Q.pop();
            }
        } else if (command == "size") {
            if (Q.empty()) { cout << 0 << "\n";}
            else cout << Q.size() << "\n";
        } else if (command == "empty") {
            if (Q.empty()) {cout << 1 << "\n";}
            else cout << 0 << "\n";
        } else if (command == "front") {
            if (Q.empty()) {cout << -1 << "\n";}
            else cout << Q.front() << "\n";
        } else
            if (Q.empty()) {cout << -1 << "\n";}
            else cout << Q.back() << "\n";
    }
}

