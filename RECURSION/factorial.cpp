<<<<<<< HEAD
#include <iostream>
using namespace std;
int factorial(int n)
{
    cout << n << endl;
    if (n == 0)
    {
        return 1;
    }

    // int smallOutput=factorial(n-1);

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
=======
#include <iostream>
using namespace std;
int factorial(int n)
{
    cout << n << endl;
    if (n == 0)
    {
        return 1;
    }

    // int smallOutput=factorial(n-1);

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}