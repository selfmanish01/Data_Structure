#include <iostream>
using namespace std;
  bool sorted(int arr[], int size){
      if (size == 0 || size == 1)
      {
          return true;
    }

    if(arr[0]<=arr[1]){
        sorted(arr + 1, size - 1);
    }
    else{
        return false;
    } 
         
  }
int main()
{
 int arr[100];
 int size=5;
 cout <<" take input value"<<endl;
 for (int i=0; i<size;i++){
    cin >> arr[i];
 }
 cout << sorted(arr,5)<<endl;


}