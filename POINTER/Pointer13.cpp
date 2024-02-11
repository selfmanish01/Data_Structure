#include <iostream>
using namespace std;
void Print(int *p)
{
    cout << *p << endl;
}
void IncrementPointer(int *p)
{
    p = p + 1;
}
void increment(int *p)
{
    (*p)++;
}

int main()
{
    int i = 10;
    int *p = &i;
    Print(p);
    cout << p << endl;
    IncrementPointer(p);
    cout << p << endl;
    cout << *p << endl;
    increment(p);
    cout << *p << endl;
}