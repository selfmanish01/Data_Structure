#include <iostream>
using namespace std;
int minStep(int n)
{
    // written by me 
    int count = 0;
    while (n!=0){
    if (n % 3 == 0)
    {
        n = n / 3;
        count++;
    }
    if (n % 2 == 0)
    {
        n = n / 2;
        count++;
    }

    if (n % 2 != 0 && n % 3 != 0)
    {
        n = n - 1;
        if(n==0){
            break;
        }
        count++;
    }
    }
    return count;
}
int main()
{
    cout << minStep(10) << endl;
}