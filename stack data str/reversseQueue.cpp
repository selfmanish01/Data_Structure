
#include <queue>
void reverseQueue(queue<int> &input)
{
    // Write your code here
    if (input.empty())
        return;
    int x = input.front();
    input.pop();
    reverseQueue(input);
    input.push(x);
}