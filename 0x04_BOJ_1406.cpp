#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input;
    cin >> input;
    list<char> L;
    for (auto c : input) L.push_back(c);
    auto cursor = L.end();
    int m;
    cin >> m;
    while (m--){
        char com;
        cin >> com;
        if (com == 'P') { 
            char add;
            cin >> add;
            L.insert(cursor, add);
        }
        else if (com == 'L'){            
            if (cursor != L.begin()) cursor--;
            }
        else if (com == 'D'){            
            if (cursor != L.end()) cursor++;
            }
        else {            
            if (cursor != L.begin()) {cursor--; cursor = L.erase(cursor);}
            }
        }
        for (auto c : L) cout << c;
}