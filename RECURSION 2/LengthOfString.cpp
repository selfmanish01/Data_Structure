<<<<<<< HEAD
#include <iostream>
using namespace std;
int length(char str[])
{
    if (str[0] == '\0')
        return 0;
    int smallstringlength = length(str + 1);
    return 1 + smallstringlength;
}
int main()
{
    char str[100];
    cin >> str;
    int l = length(str);
    cout << l << endl;
=======
#include <iostream>
using namespace std;
int length(char str[])
{
    if (str[0] == '\0')
        return 0;
    int smallstringlength = length(str + 1);
    return 1 + smallstringlength;
}
int main()
{
    char str[100];
    cin >> str;
    int l = length(str);
    cout << l << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}