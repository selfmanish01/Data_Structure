<<<<<<< HEAD
#include <iostream>
using namespace std;
int partition(int A[], int l, int h)
{
    int pivot = A[l]; 
    int i = l, j = h, t;
    while (i < j)
    {
        do
        {
            i++; 
        } while (A[i] <= pivot);
        do
        {
            j--; 

        } while (A[j] > pivot);
        if (i < j) 

        {
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }
   
    t = A[j];
    A[j] = A[l];
    A[l] = t;
    return j;
}
void quickSort(int l, int h, int a[])
{
    int j;
    if (l < h)
    {
        j = partition(a, l, h);
        quickSort(l, j, a);
        quickSort(j + 1, h, a);
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[] = {8,43,6,9,56,12}; 

    cout << "Array before Sorting: ";
    display(a, 6);
    quickSort(0, 6, a);
    cout << endl;
    cout << "Array after Sorting: ";
    display(a, 6);
    return 0;
}
=======
#include <iostream>
using namespace std;
int partition(int A[], int l, int h)
{
    int pivot = A[l]; 
    int i = l, j = h, t;
    while (i < j)
    {
        do
        {
            i++; 
        } while (A[i] <= pivot);
        do
        {
            j--; 

        } while (A[j] > pivot);
        if (i < j) 

        {
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }
   
    t = A[j];
    A[j] = A[l];
    A[l] = t;
    return j;
}
void quickSort(int l, int h, int a[])
{
    int j;
    if (l < h)
    {
        j = partition(a, l, h);
        quickSort(l, j, a);
        quickSort(j + 1, h, a);
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[] = {8,43,6,9,56,12}; 

    cout << "Array before Sorting: ";
    display(a, 6);
    quickSort(0, 6, a);
    cout << endl;
    cout << "Array after Sorting: ";
    display(a, 6);
    return 0;
}
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
