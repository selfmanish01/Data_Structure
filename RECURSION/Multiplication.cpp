#include <iostream>
using namespace std;
int multiply(int m, int n)
{

    // our base csees
    if (m == 0 || n == 0)
        return 0;

    if (n == 1)
    {
        return m;
    }
    if (m == 1)
    {
        return n;
    }

    // Recursive callls
    if (n < 0)
    {
        return -multiply(m, -n);
    }
    if (m < 0)
    {
        return -multiply(-m, n);
    }
    return m + multiply(m, n - 1);
}

int main()
{
}