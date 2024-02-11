#include <iostream>
using namespace std;
  int Power(int x, int n){
     
 if (x==1) return 1;
  if (n==1) return x;
   int result=1;
   result=x*Power(x,n-1);
   return result;
   
  }
int main()
{
 int x,n;
 cin >> x>>n;
 cout <<Power(x,n)<<endl;

}