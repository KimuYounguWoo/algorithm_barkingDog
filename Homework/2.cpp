#include<bits/stdc++.h>
using namespace std;
#define LEN 1000000

int test[LEN];
int top = 0;    //Append 시에 들어가야할 인덱스
int ed = 0x7f7f7f7f;

void insert(int pos, int x) {
    cout << "[insert... " << x << " on... " << pos <<"]\n";
    for (int i=top; i > pos; i--) {
        test[i] = test[i-1];
            }
    test[pos] = x;
    top++;

}

void append(int x) {
    cout << "[append.. " << x << "]\n";
    if (top == 0) {
        test[top] = x;
        top++;
        }
    else {
        test[top] = x;
        top++;
    }
}

int pop(int pos) {
    cout << "[pop on.. " << pos << "]\n";
    top--;
    int tmp = test[pos];
    for (int i = pos; i<top; i++){
        test[i] = test[i+1];
    }
    return tmp;
}

void print() {
    if (top == 0) {cout << "[List is empty]\n\n";}
    else {
        cout << "list: { ";
    for(int i=0; i<top; i++) {
        cout << test[i] << " "; 
    }
    cout << "}\nsize = " << top << " / now top's index = " << top << "\n\n" ;
    }
}

int main() {
    print();        //empty test
    append(1);
    print();
    append(3);
    print();
    append(30);
    print();
    append(35);
    print();
    append(38);
    print();
    pop(3);
    print();
    append(5);
    print();
    insert(3, 2100);
    print();
    append(7);
    print();
    cout << "end test";
    
    return 0;
}