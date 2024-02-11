#include <iostream>
using namespace std;
  
  int fib(int n ){

      int *arr = new int[n + 1];
      for (int i = 0; i <= n;i++){
          arr[i] = -1;
      }
      return fib_2(n, arr);
  }
  int fib_2(int n, int*arr){
     
     if(n<=1){
         return n;
     }
     if(arr[n]!=-1){
         return arr[n];
     }
     int a = fib_2(n - 1, arr);
     int b = fib_2(n - 2, arr);
     arr[n] = a + b;
     return arr[n];
  };
  int main()
  {
      int n;
      cin >> n;
      cout << fib(n);
}