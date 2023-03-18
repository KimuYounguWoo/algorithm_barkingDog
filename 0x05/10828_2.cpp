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
    const int MAX = 100000;
    int datas[MAX];  //스택 구현체
    int pos = 0;
    while (n--) {
        string command;
        cin >> command;
        if (command == "push") {
            int data;
            cin >> data;
            datas[pos++] = data;
        } else if (command == "pop") {
            if (pos == 0) cout << -1 << '\n';
            else {
                cout << datas[pos-1] << '\n';
                pos--;
            }
        } else if (command == "size")
            cout << pos << '\n';
        else if (command == "empty")
            if (pos == 0) {cout << 1 << '\n';}
            else cout << 0 << '\n';
        else {
            if (pos == 0) cout << -1 << '\n';
            else cout << datas[pos-1] << '\n';
        }
    }
}