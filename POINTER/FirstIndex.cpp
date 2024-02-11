#include <iostream>
using namespace std;
int firstindex(int arr[], int size, int x, int currentindex)
{

    if (currentindex >= size)
        return -1;
    if (arr[currentindex] == x)
        return currentindex;

    return firstindex(arr, size, x, currentindex + 1);
}
int main()
{
    int size = 5;
    int arr[1000];
    cout << "Enter the size of the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the value which is searched";
    cin >> x;
    int result = firstindex(arr, size, x, 0);
    if (result != -1)
    {
        cout << "First index of " << x << "in the array" << result << endl;
    }
    else
    {
        cout << x << "is not present in the array " << endl;
    }
    return 0;
};