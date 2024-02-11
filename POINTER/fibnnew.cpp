#include <iostream>
using namespace std;
  int fib(int n){
     if(n==0) return 0;
     if (n==1) return 1;
   
 fib(n)=fib(n-1)+fib(n-2);

 return fib(n-1)+fib(n-2);
 // return fib(n);
  }
int main()
{
 cout <<fib(10)<<endl;
}