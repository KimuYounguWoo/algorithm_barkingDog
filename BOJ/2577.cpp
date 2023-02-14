#include <bits/stdc++.h>
using namespace std;

int main() {
    int count[100] = {0,};
    ios::sync_with_stdio(0);
    cin.tie(0);
    int data1, data2, data3;
    cin >> data1 >> data2 >> data3;
    int result = data1*data2*data3;
    string str = to_string(result);
    for (auto c : str) {
        for(int i=0; i<10; i++) {
            int tmp = c - '0';
            if (tmp == i) {
                count[i] += 1;
            }
        }
        }
    for (int i=0; i<10; i++){
        cout << count[i] << "\n";
    }
}