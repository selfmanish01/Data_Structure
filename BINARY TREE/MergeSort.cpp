#include <iostream>
using namespace std;

void merge(int *arr, int start, int end){
    int mid = start + (end - start) / 2;
    // first part of array split and then copy the value.
    int *arr1 = new int[mid - start + 1];
    int mainIndex = 0;
    for (int i = 0;  i < (mid - start + 1); i++){
        arr1[i] = arr[mainIndex++];
    }
    
    // second part of array split and then copy the value.
    int *arr2 = new int[end - mid];
    for (int i = 0; i < (end - mid);i++){
        arr2[i] = arr[mainIndex++];
    }

    int mainIndex2 = 0;
    int index1 = 0;
    int index2 = 0;
    while(index1<(mid-start+1)&& index2<(end-mid)){
        if(arr1[index1]<arr2[index2]){
            arr[mainIndex2++] = arr1[index1++];
        }else{
            arr[mainIndex2++] = arr2[index2++];
        }
    }
    if(index1<(mid-start+1)){
        arr[mainIndex2++] = arr1[index1++];
    }
    if(index2<(end-mid)){
        arr[mainIndex2++] = arr2[index2++];
    };
    delete[] arr1;
    delete[] arr2;
}
void mergeSort(int *arr, int start, int end) {
    //base case of merge sort
    if(start>=end){
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
};

int main()
{
    int arr[10] = {8, 3, 9, 4, 88, 2, 6, 11, 7, 0};
    int n = 10;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
        
    }
    return 0;
};