#include <iostream>
using namespace std;
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

void showfib(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << "  ";
    }
}

int main()
{
    int m;
    cin >> m;
    cout << showfib(m) << endl;
}