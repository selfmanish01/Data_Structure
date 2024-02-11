#include <iostream>
using namespace std;
int firstIndex(int arr[], int size, int x)
{
    int last = -1, count = 0, index;
    if (size == 0 && last < 0){
        return -1;
    }
        

    if (size==0 && last >= 0){
        return last;
    }
        

    if (arr[0] == x)
    {
        last = count;
        count++;
        firstIndex(arr + 1, size - 1, x);
    }
    else
    {
        count++;
        firstIndex(arr + 1, size - 1, x);
    }
}

int main()
{
    int arr[] = {2, 9, 4, 7, 9, 11, 15};
    cout << firstIndex(arr, 7, 2);
}