#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n;
string datas;
vector<string> jp;

bool compare(string a, string b) {
    if (a.size() > b.size()) {
        return false;
    } else if (a.size() < b.size()) {
        return true;
    }
    else{
        if (a<b) return true;
        return false;
    }
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    while (n--) {
        cin >> datas;
        jp.push_back(datas);
    }
    sort(jp.begin(), jp.end(), compare);
    jp.erase(unique(jp.begin(), jp.end()), jp.end());
    for (auto a : jp) {
        cout << a << "\n";
    }

}