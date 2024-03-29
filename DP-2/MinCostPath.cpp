<<<<<<< HEAD
#include <iostream>
#include <cmath>

using namespace std;
int minCostPath(int **input, int m, int n, int i, int j)
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
    // recursive call

    int x = minCostPath(input, m, n, i, j + 1);
    int y = minCostPath(input, m, n, i + 1, j + 1);
    int z = minCostPath(input, m, n, i + 1, j);
    // small calcalution
    int ans = min(x, min(y, z)) + input[i][j];
    return ans;
}
int minCostPath(int **input, int m, int n)
{
    return minCostPath(input, m, n, 0, 0);
}

int main()
{
    int n, m;
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
    cout << minCostPath(input, m, n) << endl;
=======
#include <iostream>
#include <cmath>

using namespace std;
int minCostPath(int **input, int m, int n, int i, int j)
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
    // recursive call

    int x = minCostPath(input, m, n, i, j + 1);
    int y = minCostPath(input, m, n, i + 1, j + 1);
    int z = minCostPath(input, m, n, i + 1, j);
    // small calcalution
    int ans = min(x, min(y, z)) + input[i][j];
    return ans;
}
int minCostPath(int **input, int m, int n)
{
    return minCostPath(input, m, n, 0, 0);
}

int main()
{
    int n, m;
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
    cout << minCostPath(input, m, n) << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}