<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;
int min_step(int n)
{

    // base case
    if (n <= 1)
    {
        return 0;
    }
    int x = min_step(n - 1);
    int y = INT_MAX, z = INT_MAX;
    if (n % 2 == 0)
    {
        y = min_step(n / 2);
    }
    if (n % 3 == 0)
    {
        z = min_step(n / 3);
    }
    int ans = min(x, min(y, z));
    return ans + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << min_step(n) << endl;
=======
#include <iostream>
#include <cmath>
using namespace std;
int min_step(int n)
{

    // base case
    if (n <= 1)
    {
        return 0;
    }
    int x = min_step(n - 1);
    int y = INT_MAX, z = INT_MAX;
    if (n % 2 == 0)
    {
        y = min_step(n / 2);
    }
    if (n % 3 == 0)
    {
        z = min_step(n / 3);
    }
    int ans = min(x, min(y, z));
    return ans + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << min_step(n) << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}