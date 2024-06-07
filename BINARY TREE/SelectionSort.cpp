#include <iostream>
using namespace std;


void SelectionSort(int arr[],int n){
    int minval;
    int i, j;
    for ( i = 0; i < n; i++){
        for ( j =i+1; j < n;j++){
             minval = arr[i];
            if(minval<arr[j]){
                minval = arr[j];
            }           
        }
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}


int main()
{
 
}