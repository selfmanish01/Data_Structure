#include <iostream>
#include <vector>

using namespace std;
int activity_Sec(int n)
{
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int output = 0;
    
}
int main()
{
    int n;
    cin >> n;
    cout << activity_Sec(n);
}