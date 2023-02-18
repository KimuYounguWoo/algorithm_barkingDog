#include <bits/stdc++.h>
using namespace std;

int n;
string input;
vector<string> serial;

bool compare(string a, string b) {
    if (a.size() < b.size()) {
        return true;
    } else if (a.size()>b.size())
        return false;
    else { // 자릿수의 합
        int sa = 0, sb = 0;
        for (int i = 0; i < a.size(); i++){
            if ('0' <= a[i] && a[i] <= '9')
                sa += a[i] - '0';
            if ('0' <= b[i] && b[i] <= '9')
                sb += b[i] - '0';
        }
        if (sa < sb)
            return true;
        else if (sa > sb)
            return false;
        else {  //문자열 비교
            if (a < b)
                return true;
            else
                return false;
        }

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        serial.push_back(input);
    }
    sort(serial.begin(), serial.end(), compare);
    for (int i = 0; i < n; i++)
        cout << serial[i] << '\n';
}