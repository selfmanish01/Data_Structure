#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long numMiles(int n)
{
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

    long long output = 0;
    for (int i = 0; i < n; i++)
    {
        output += pow(2, i) * arr[i];
    }

    return output;
}

int main()
{
    int n;
    cin >> n;
    cout << numMiles(n);
    return 0;
}
