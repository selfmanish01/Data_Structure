#include <iostream>
using namespace std;
  
 // Binary search
 int Binarysearch(int arr[],int n , int val){
    int start = 0 ;
    int end = n - 1;
    while(start<=end){
        int mid = start + (end - start) / 2;
        if (arr[mid] = val){
            return mid;
        }
        else if(arr[mid]>mid){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;//if the elemnt is not found in the array 
 }

int main()
{
 
}