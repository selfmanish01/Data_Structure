<<<<<<< HEAD
#include<iostream>
using namespace std;


not able to do 




// int lastIndex(int arr[], int size, int x, int index){
//     if(size==0|| index>=size) return -1;

    int findLastIndexRecursive(int arr[], int size, int target, int start=0)
    {
        if (start >= size|| size==0)
        {
            return -1; // Base case.... target not found
        }

        int currentIndex = findLastIndexRecursive(arr, size, target, start + 1);

        if (currentIndex != -1)
        {
            return currentIndex; // If target found in subsequent indices, return that index
        }

        if (arr[start] == target)
        {
            return start; // Base case... target found
        }

        return -1; // Base case... target not found
    }

    int findLastIndex(int arr[], int size, int target)
    {
        return findLastIndexRecursive(arr, size, target, 0);
    }
}
int main (){


=======
#include<iostream>
using namespace std;


not able to do 




// int lastIndex(int arr[], int size, int x, int index){
//     if(size==0|| index>=size) return -1;

    int findLastIndexRecursive(int arr[], int size, int target, int start=0)
    {
        if (start >= size|| size==0)
        {
            return -1; // Base case.... target not found
        }

        int currentIndex = findLastIndexRecursive(arr, size, target, start + 1);

        if (currentIndex != -1)
        {
            return currentIndex; // If target found in subsequent indices, return that index
        }

        if (arr[start] == target)
        {
            return start; // Base case... target found
        }

        return -1; // Base case... target not found
    }

    int findLastIndex(int arr[], int size, int target)
    {
        return findLastIndexRecursive(arr, size, target, 0);
    }
}
int main (){


>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}