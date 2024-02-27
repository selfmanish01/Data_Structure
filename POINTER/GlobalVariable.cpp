<<<<<<< HEAD
#include <iostream>
using namespace std;
int a;
void g()
{
    a++;
    cout << a << endl;
}
void f()
{
    cout << a << endl;
    a++;
    g();
}

int main()
{
    int a = 10;
    f();
    cout << a << endl;
=======
#include <iostream>
using namespace std;
int a;
void g()
{
    a++;
    cout << a << endl;
}
void f()
{
    cout << a << endl;
    a++;
    g();
}

int main()
{
    int a = 10;
    f();
    cout << a << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}