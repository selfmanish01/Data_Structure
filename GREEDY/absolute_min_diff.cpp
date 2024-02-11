#include <iostream>
#include <cmath>
#include <algorithm>
// #include <vector>
using namespace std;

int minDiff(int n)
{
    int arr[n];
    // vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int minDiff = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        int diff = abs(arr[i] - arr[i + 1]);
        minDiff = min(minDiff, diff);
    }

    return minDiff;
}

int main()
{
    int n;
    cin >> n;
    cout << minDiff(n);
    return 0;
}
