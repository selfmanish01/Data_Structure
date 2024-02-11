#include <iostream>
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
};

int main()
{

    stackUsingArray s;
    
}