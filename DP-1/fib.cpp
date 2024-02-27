<<<<<<< HEAD
#include <iostream>
using namespace std;
int fib1(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int a = fib1(n - 1);
    int b = fib1(n - 2);
    // fib(n)= fib(n-1)+fib(n-2);
    return a + b;
};
int fibonacci(int n)
{
    fibonacci(0) = 0;
    fibonacci(1) = 1;
    for (int i = 2; i <= n; i++)
    {
        fibonacci(i) = fibonacci(i - 1) + fibonacci(i - 2);
    }
    return fibonacci(n);
};
int main()
{
    cout << fib1(20) << endl;
    cout << "fibonacci" << fibonacci(19) << endl;
=======
#include <iostream>
using namespace std;
int fib1(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int a = fib1(n - 1);
    int b = fib1(n - 2);
    // fib(n)= fib(n-1)+fib(n-2);
    return a + b;
};
int fibonacci(int n)
{
    fibonacci(0) = 0;
    fibonacci(1) = 1;
    for (int i = 2; i <= n; i++)
    {
        fibonacci(i) = fibonacci(i - 1) + fibonacci(i - 2);
    }
    return fibonacci(n);
};
int main()
{
    cout << fib1(20) << endl;
    cout << "fibonacci" << fibonacci(19) << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}