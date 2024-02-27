<<<<<<< HEAD
#include <iostream>
using namespace std;
int fib_3(int n)
{
    int *ans = new int[n + 1];
    ans[0] = 0;
    ans[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    return ans[n];
}

int main()
{
    cout << fib_3(5) << endl;
=======
#include <iostream>
using namespace std;
int fib_3(int n)
{
    int *ans = new int[n + 1];
    ans[0] = 0;
    ans[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    return ans[n];
}

int main()
{
    cout << fib_3(5) << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}