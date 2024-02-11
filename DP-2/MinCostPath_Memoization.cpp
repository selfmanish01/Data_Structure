#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int minCostPathmem(int **input, int m, int n, int i, int j, int **output)
{
    // base case
    if (i == m - 1 && j == n - 1)
    {
        return input[i][j];
    }
    if (i >= m || j >= n)
    {
        return INT_MAX;
    }
    // check if already computed
    if (output[i][j] != -1)
    {
        return output[i][j];
    }
    // recursive call

    int x = minCostPathmem(input, m, n, i, j + 1, output);
    int y = minCostPathmem(input, m, n, i + 1, j + 1, output);
    int z = minCostPathmem(input, m, n, i + 1, j, output);
    // small calculation
    int ans = min(x, min(y, z)) + input[i][j];
    // save answer for future use
    output[i][j] = ans;
    return ans;
}

int minCostPathmem(int **input, int m, int n)
{
    int **output = new int *[m];
    for (int i = 0; i < m; i++)
    {
        output[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            output[i][j] = -1; // Initialize memoization array with -1
        }
    }
    return minCostPathmem(input, m, n, 0, 0, output);
}

int main()
{
    int m, n;
    cin >> m >> n;
    int **input = new int *[m];
    for (int i = 0; i < m; i++)
    {
        input[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> input[i][j];
        }
    }
    cout << minCostPathmem(input, m, n) << endl;

}
