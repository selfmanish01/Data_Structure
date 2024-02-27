<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;
int minStepsHelper(int n, int *ans)
{
    // base case
    if (n <= 1)
    {
        return 0;
    }

    // check if output alreaddy exist

    if (ans[n] != -1)
    {
        return ans[n];
    }
    // calculate output
    int x = minStepsHelper(n - 1, ans);
    int y = INT_MAX, z = INT_MAX;
    if (n % 2 == 0)
    {
        y = minStepsHelper(n / 2, ans);
    }
    if (n % 3 == 0)
    {
        z = minStepsHelper(n / 3, ans);
    }
    int output = min(x, min(y, z))+1;
    ans[n] = output;
    return output;
}
int minSteps(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        ans[i] = -1;
    }
    return minStepsHelper(n, ans);
}

int main()
{
    int n;
    cin >> n;
    cout << minSteps(n) << endl;
=======
#include <iostream>
#include <cmath>
using namespace std;
int minStepsHelper(int n, int *ans)
{
    // base case
    if (n <= 1)
    {
        return 0;
    }

    // check if output alreaddy exist

    if (ans[n] != -1)
    {
        return ans[n];
    }
    // calculate output
    int x = minStepsHelper(n - 1, ans);
    int y = INT_MAX, z = INT_MAX;
    if (n % 2 == 0)
    {
        y = minStepsHelper(n / 2, ans);
    }
    if (n % 3 == 0)
    {
        z = minStepsHelper(n / 3, ans);
    }
    int output = min(x, min(y, z))+1;
    ans[n] = output;
    return output;
}
int minSteps(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        ans[i] = -1;
    }
    return minStepsHelper(n, ans);
}

int main()
{
    int n;
    cin >> n;
    cout << minSteps(n) << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}