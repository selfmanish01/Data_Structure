#include <iostream>
using namespace std;
  int num(int n){
   // cout <<n <<" ";
    if (n==1) return 1;
     int output= num(n-1);
     return 1+output;
  }

int main()
{
 int n;
 cin>>n;
 cout << num(n)<<endl;
}


//