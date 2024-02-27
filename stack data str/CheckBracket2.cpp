<<<<<<< HEAD
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool balancedBrackets(string str)
{
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else if (c == ')' || c == ']' || c == '}')
        {
            if (st.empty())
            {
                return false;
            }
            else if ((c == ')' && st.top() == '(') ||
                     (c == ']' && st.top() == '[') ||
                     (c == '}' && st.top() == '{'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        }

    return st.empty();
}

int main()
{
    string str;
    cin >> str;

    bool isBalanced = balancedBrackets(str);

    if (isBalanced)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
=======
#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool balancedBrackets(string str)
{
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else if (c == ')' || c == ']' || c == '}')
        {
            if (st.empty())
            {
                return false;
            }
            else if ((c == ')' && st.top() == '(') ||
                     (c == ']' && st.top() == '[') ||
                     (c == '}' && st.top() == '{'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        }

    return st.empty();
}

int main()
{
    string str;
    cin >> str;

    bool isBalanced = balancedBrackets(str);

    if (isBalanced)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
