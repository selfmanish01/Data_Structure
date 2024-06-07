#include <iostream>
using namespace std;
int Fib_TopDown_Iteratively(int n)
{
    const int size = n + 1;
    int arr[size];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < size;i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}
int main()
{
    int n;
    cin >> n;
    int result = Fib_TopDown_Iteratively(n);
    cout << result;
}