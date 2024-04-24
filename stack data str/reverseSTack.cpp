
void reverseStack(stack<int> &input, stack<int> &extra)
{
    // Write your code here
    while (!input.empty())
    {
        int n = input.top();
        extra.push(n);
        input.pop();
    }
    input = extra;
}