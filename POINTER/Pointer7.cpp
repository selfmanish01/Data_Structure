#include <iostream>
using namespace std;
void swap(char *x, char *y)
{
    char *t = x;
    x = y;
    y = t;
}

int main()
{
    char *x = "g";
    char *y = "m";
    char *t;
    cout << x << " " << y;
    cout<<endl;
    swap(x, y);
    cout << " " << x << " " << y;
    t = x;
    x = y;
    y = t;
    return 0;
}