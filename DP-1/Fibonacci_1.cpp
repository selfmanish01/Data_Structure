#include <iostream>
using namespace std;

int fib_helper(int n, int *ans)
{
    // base case
    if (n <= 1)
        return n;
    // save fun
    if (ans[n] != -1)
    {
        return ans[n];
    }
    int a = fib_helper(n - 1, ans);
    int b = fib_helper(n - 2, ans);

    ans[n] = a + b;
    return ans[n];
}
int fib_2(int n){

    int *ans = new int[n+1];
    for (int i = 0; i <= n; i++)
    {
        ans[i] = -1;
    }
    return fib_helper(n, ans);
}
int main()
{
    cout << fib_2(6) << endl;
}