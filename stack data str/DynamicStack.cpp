#include <iostream>
#include <climits>
using namespace std;
class stackUsingArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    stackUsingArray()
    {
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }

    // return number of elements present in the array
    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        //     if (nextIndex==0) return true ;
        //     else return false;

        return nextIndex == 0;
    }
    // Insert elements
    void push(int elements)
    {
        if (nextIndex == capacity)
        {

            int *newData = new int(2 * capacity);
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
        }
        data[nextIndex] = elements;
        nextIndex++;
    }
    // delete elements
    int pop()
    {
        if (isEmpty())
        {
            cout << " Stack is Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    // top elements
    int top()
    {
        if (isEmpty())
        {
            cout << " Stack is Empty " << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};
int main()
{
    stackUsingArray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
}