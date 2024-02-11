#include <iostream>
using namespace std;
int countZerosRecursive(int n)
{
    int count = 0;
    if (n == 0)
        return 1;

    if (n < 10)
        return 0;
    int lastDigit = n % 10;
    int zeros = (lastDigit == 0) ? 1 : 0;
    return zeros + countZerosRecursive(n / 10);
}
// int countZeros(int n)
// {
//     if (n == 0)
//         return 1;
//     return countZerosRecursive(n);
// }

int main()
{
    int n;
    cout << "Take Input n : " endl;
    cin >> n;
    cout << zero(n) << endl;
}