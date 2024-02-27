<<<<<<< HEAD
#include <iostream>
#include <cstring>
using namespace std;
bool palindrome(string &str, int start, int end)
{
    if (start >= end)
        return true;

    if (str[start] == str[end])
    {
        palindrome(str, start + 1, end - 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string str = "abdcba";
    cout << palindrome(str, 0, 5) << endl;
=======
#include <iostream>
#include <cstring>
using namespace std;
bool palindrome(string &str, int start, int end)
{
    if (start >= end)
        return true;

    if (str[start] == str[end])
    {
        palindrome(str, start + 1, end - 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string str = "abdcba";
    cout << palindrome(str, 0, 5) << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}