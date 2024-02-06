#include <iostream>
using namespace std;

void merge(int *arr, int s , int e){
    

    int mid = s + (e - s) / 2;
    int *arr1 = new int[mid-s+1];
    int *arr2 = new int[e-mid];
    // copy values
    int mainIndex = s;
    for (int i = 0; i < (mid - s + 1);i++){
        arr1[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for (int i = 0; i < (e-mid );i++){
        arr2[i] = arr[mainIndex++];
    }


    // merge two sorted aarray
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    while(index1<(mid-s+1)&& index2<(e-mid)){
        if(arr1[index1]< arr2[index2]){
            arr[mainIndex++] = arr1[index1++];
        }else{
            arr[mainIndex++] = arr2[index2++];
        }
    }
    while (index1 < (mid - s + 1)){
        arr[mainIndex++] = arr1[index1++];
    }
    
    while (index2 < (e- mid)){
        arr[mainIndex++] = arr2[index2++];
    }

}
void mergeSort(int *arr , int s , int e){
    // base case 
    if(s>=e){

        return;
    }
    int mid = s + (e - s) / 2;
    // merge sort on first half
    mergeSort(arr, s, mid);
    // merge sort on second half
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main(){
    int arr[10] = {10, 22, 3, 5, 7, 88, 33, 22, 36, 87 };

    int n = 10;
    mergeSort(arr, 0, n-1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}