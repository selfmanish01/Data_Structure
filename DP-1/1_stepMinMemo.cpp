<<<<<<< HEAD
#include <iostream>
#include<cmath>

using namespace std;
  int minStepMemo(int n, int*arr ){
    if (n<=1){
        return 0;
    }
    if (arr[n]!=-1){
        return arr[n];
    }
    
      int x = minStepMemo(n - 1,arr);
      int y = INT_MAX;
      int z = INT_MAX;
      if ( n%2==0){
         y= minStepMemo(n / 2,arr);
      }
      if(n%3==0){
          z = minStepMemo(n / 3,arr);
      }
      int output= min(x, min(y, z)) + 1;
      arr[n] = output;
      return output;
  }
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n;i++){
        arr[i] = -1;
    }
        cout << minStepMemo(n,arr) << endl;
        delete[] arr;
        return 0;
}
=======
#include <iostream>
#include<cmath>

using namespace std;
  int minStepMemo(int n, int*arr ){
    if (n<=1){
        return 0;
    }
    if (arr[n]!=-1){
        return arr[n];
    }
    
      int x = minStepMemo(n - 1,arr);
      int y = INT_MAX;
      int z = INT_MAX;
      if ( n%2==0){
         y= minStepMemo(n / 2,arr);
      }
      if(n%3==0){
          z = minStepMemo(n / 3,arr);
      }
      int output= min(x, min(y, z)) + 1;
      arr[n] = output;
      return output;
  }
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n;i++){
        arr[i] = -1;
    }
        cout << minStepMemo(n,arr) << endl;
        delete[] arr;
        return 0;
}
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
