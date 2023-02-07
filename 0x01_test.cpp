//0x01 기초 코드 작성 요령

#include <bits/stdc++.h>
using namespace std;

int func1(int N){
    //3의 배수이거나, 5의 배수이므로 OR을 사용
    int sum = 0;    //+1
    for (int i = 3; i <= N; i++) {              //i, sum = +2, i<N; i++ = +2
        if ( ((i % 3) == 0) || ((i % 5) == 0) )// % * 2 + || = +3
            sum += i;   //+1
    }
    return sum;
  //시간 복잡도는 1 + 1 + ( 2 + 3 + 1 ) * N + 1 = 6N
}

// int func2(int arr[], int N) {
//     for (int i = 0; i<N; i++)           // for -> n , +1
//         for (int j = i+1 ; j<N; j++)    // for -> n*n, +1
//             if(arr[i]+arr[j] == 100)    // +1
//                 return 1;               // +1    
//   return -1;                            // +1
//   //시간 복잡도는 (N+1)*(N+2) + 1 = N^2
// }

int func2(int arr[], int N) {
  int check[101] = {};
  for (int i = 0; i < N; i++) {
    if (check[100-arr[i]] == 1)
      return 1; 
  }
  return 0;

}

int func3(int N){
    for (int i = 0; i<N; i++) {
        if(i*i == N) return 1;
    }
    return 0;
}

int func4(int N){
    int i = 1;
    while (i*2 <= N) i *= 2;
    return i;
  return -1;
}

void test1(){
  cout << "****** func1 test ******\n";
  int n[3] = {16, 34567, 27639};
  int ans[3] = {60, 278812814, 178254968};
  for(int i = 0; i < 3; i++){
    int result = func1(n[i]);
    cout << "TC #" << i << '\n';
    cout << "expected : " << ans[i] << " result : " << result;
    if(ans[i] == result) cout << " ... Correct!\n";
    else cout << " ... Wrong!\n";
  }
  cout << "*************************\n\n";
}

void test2(){
  cout << "****** func2 test ******\n";
  int arr[3][4] = {{1,52,48}, {50,42}, {4,13,63,87}};
  int n[3] = {3, 2, 4};
  int ans[3] = {1, 0, 1};
  for(int i = 0; i < 3; i++){
    int result = func2(arr[i], n[i]);
    cout << "TC #" << i << '\n';
    cout << "expected : " << ans[i] << " result : " << result;
    if(ans[i] == result) cout << " ... Correct!\n";
    else cout << " ... Wrong!\n";
  }
  cout << "*************************\n\n";
}

void test3(){
  cout << "****** func3 test ******\n";
  int n[3] = {9, 693953651, 756580036};
  int ans[3] = {1, 0, 1};
  for(int i = 0; i < 3; i++){
    int result = func3(n[i]);
    cout << "TC #" << i << '\n';
    cout << "expected : " << ans[i] << " result : " << result;
    if(ans[i] == result) cout << " ... Correct!\n";
    else cout << " ... Wrong!\n";
  }
  cout << "*************************\n\n";
}

void test4(){
  cout << "****** func4 test ******\n";
  int n[3] = {5, 97615282, 1024};
  int ans[3] = {4, 67108864, 1024};
  for(int i = 0; i < 3; i++){
    int result = func4(n[i]);
    cout << "TC #" << i << '\n';
    cout << "expected : " << ans[i] << " result : " << result;
    if(ans[i] == result) cout << " ... Correct!\n";
    else cout << " ... Wrong!\n";
  }
  cout << "*************************\n\n";
}

int main(void){
  test1();
  test2();
  test3();
  test4();
}