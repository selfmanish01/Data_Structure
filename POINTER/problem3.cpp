#include <iostream>
#include <vector>
using namespace std;
pair<int, int> findRooms(const vector<int> &coins, int k)
{
    int n = coins.size();
    int start = 0;
    int current_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        current_sum += coins[i];
        while (current_sum > k && start <= i)
        {
            current_sum -= coins[start];
            start++;
        }
        if (current_sum == k)
        {
            return {start + 1, i + 1}; 
        }
    }
    return {-1, -1}; 
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    pair<int, int> result = findRooms(coins, k);
    cout << result.first << " " << result.second << il;
    return 0;
}
