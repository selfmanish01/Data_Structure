#include <iostream>
using namespace std;
void InsertionSort(int arr[],int n){

    for (int i = 1; i < n;i++){
        int current = arr[i];
        int j;
        for (j = i - 1; j >= 0;j--){
            if(current < arr[j]){
                arr[j + 1] = arr[j];
            }else{
                break;
            }
        }
        arr[j + 1] = current;
    }
}
int main()
{
 
}
/////tcs coding qn

#include <iostream>
using namespace std;
  
int main()
{
    int n = 10;
    for (int i = 1; i < 11;i++){
        cout << n * i << endl;
    }
}