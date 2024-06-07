#include <iostream>
using namespace std;
  int fib_BruteForce(int n){
    if(n<=1){
        return n;
    }
    int first = fib_BruteForce(n - 1);
    int  second= fib_BruteForce(n - 2);
    return first + second;
  }
int main()
{
    int n;
    cin >> n;
    int result = fib_BruteForce(n);
    cout << result;
}