#include <bits/stdc++.h>
using namespace std;



vector<int> a;
int n, m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=0; i<n; ++i)
    {
        if (i < m)
            a.push_back(0);
        else
            a.push_back(1);
    }

    // (1 < m ? 0 : 1)
    // 1 < m 1이 더크면 0 작으면 1
    do{
        for(int i = 0; i < n; ++i)
            if(a[i] == 0) cout << i+1 << ' ';
        cout << '\n';
    }while(next_permutation(a.begin(), a.end()));
}
