#include <iostream>
#include<cmath>
using namespace std;
  int minStepCount(int n){
     if(n<=1){
         return 0;
     }
      int x=minStepCount(n-1), y=INT_MAX, z=INT_MAX;
      if(n%2==0){
          y = minStepCount(n/2);
      }
      if(n% 3==0){
          z = minStepCount(n / 3);
      }
      return min(x, min(y, z)) + 1;
  };
int main()
{
    int n;
    cin >> n;
    cout << minStepCount(n) << endl;
}