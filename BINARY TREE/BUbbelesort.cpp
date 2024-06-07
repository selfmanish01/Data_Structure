#include <iostream>
using namespace std;
void Bubblesort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[6] = {5, 4, 9, 7, 11, 8};
    Bubblesort(arr, 6);
    for (int i = 0; i < 6;i++){
        cout << arr[i];
    }
}