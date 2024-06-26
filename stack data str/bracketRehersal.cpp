

#include <stack>
int countBracketReversals(string input)
{
    // Write your code here
    int l = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        l++;
    }
    if (l % 2 != 0)
        return -1;
    else
    {
        stack<char> s;
        int i = 0;
        while (input[i] != '\0')
        {
            if (input[i] == '{')

                s.push('{');

            else if (input[i] == '}' && s.empty())
                s.push('}');
            else if (input[i] == '}' && !(s.empty()))
            {
                if (s.top() == '{')
                    s.pop();
                else
                    s.push('}');
            }
            i++;
        }
        int count = 0;
        char c1, c2;
        while (!(s.empty()))
        {

            c1 = s.top();
            s.pop();
            c2 = s.top();
            if (c1 == c2)
            {
                count++;
            }
            else
                count += 2;
            s.pop();
        }
        return count;
    }
}