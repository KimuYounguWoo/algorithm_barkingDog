//BOJ 10808
// 알파벳 소문자로만 이루어진 단어 S가 주어진다. 
// 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.
// input: baekjoon
// output: 1 1 0 0 1 0 0 0 0 1 1 0 0 1 2 0 0 0 0 0 0 0 0 0 0 0
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input;\
    cin >> input;
    char table[input.length()+ 1];
    strcpy(table, input.c_str());
    for (int num = 97; num < 123; num++) {
        int val = 0;
        for (int i=0; i < strlen(table); i++) {
            if( table[i] == (char) num ) val += 1;
        }
        cout << val << " ";
    }
}