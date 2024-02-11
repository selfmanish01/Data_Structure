#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    if (size == 0)
        return 0;
    // if (size == 1)
    //     return arr[1];

  //  int output = sum(arr + 1, size - 1);
   // output = output++;
   return arr[0]+ sum(arr+1, size-1);
};
int main()
{
    int arr[100], size=5;
    cout << " Take input value" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, 5) << endl;
}