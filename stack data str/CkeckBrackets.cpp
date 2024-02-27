<<<<<<< HEAD
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            if (s.empty() || s.top() != '(')
            {
                return false;
            }
            s.pop();
        }
    }

    return s.empty();
}

int main()
{
    string str;
    cin >> str;

    bool result = isBalanced(str);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
=======
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            if (s.empty() || s.top() != '(')
            {
                return false;
            }
            s.pop();
        }
    }

    return s.empty();
}

int main()
{
    string str;
    cin >> str;

    bool result = isBalanced(str);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
