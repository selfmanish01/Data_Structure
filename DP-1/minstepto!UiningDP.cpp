#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minStepDP(int n)
{
    vector<int> dp(n + 1, INT_MAX); 
    dp[1] = 0;                      
    for (int i = 2; i <= n; ++i)
    {
        dp[i] = dp[i - 1] + 1;

        if (i % 2 == 0)
        {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        if (i % 3 == 0)
        {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << minStepDP(n) << endl;
    return 0;
}
