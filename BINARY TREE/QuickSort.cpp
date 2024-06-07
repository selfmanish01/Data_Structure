#include <iostream>
using namespace std;
int partition(int arr[],int start, int end) {

    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot at the right position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
    int i = start;
    int j = end;
    while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
};
void QuickSort(int arr[], int start, int end)
{

    //base case
    if(start>=end){
        return;
    }
    int p = partition(arr, start, end);
    QuickSort(arr, start, p - 1);
    QuickSort(arr, p + 1, end);
};

int main(){
    int arr[10] = {8, 3, 9, 4, 88, 2, 6, 11, 7, 0};
    int n = 10;
    QuickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
};