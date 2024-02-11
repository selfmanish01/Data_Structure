#include <iostream>
using namespace std;
int RemoveDuplicates(int arr[], int a)
{
    if (a == 0 || a == 1)
        return a;

    int temp[a];

    int p = 0;
    for (int q = 0; q < a - 1; q++)

        if (arr[q] != arr[q + 1])
            temp[p++] = arr[q];

    temp[p++] = arr[a - 1];

    for (int q = 0; q < p; q++)
        arr[q] = temp[q];

    return p;
}

int main()
{
    int arr[] = {2,2, 3, 5,7,8,9};
    int a = sizeof(arr) / sizeof(arr[0]);

    a = RemoveDuplicates(arr, a);

    cout << a;
}