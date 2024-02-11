#include <iostream>
using namespace std;
int fibo(int n){
    if(n<=1)
        return 1;
int a = fibo(n - 1);
int b = fibo(n - 2);
return a + b;
}
int main (){
cout << fibo(6) << endl;
}
