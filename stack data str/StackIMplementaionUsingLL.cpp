<<<<<<< HEAD
#include <iostream>
using namespace std;
template <typename T>
class node
{
public:
    T data; // int data;
    node<T> *next;

    node(T data) //(int data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack
{
    node<T> *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }

    void push(T elements) //(int elements)
    {
        node<T> *newnode = new node<T>(elements);
        newnode->next = head;
        head = newnode;
        size++;
    }

    T pop() // int pop()
    {
        if (isEmpty())
            return 0;
        // if (head==NULL) return 0;
        T ans = head->data;
        node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    T top() // int top()
    {
        if (isEmpty())
            return 0;
        // if (head == NULL) return 0;

        return head->data;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

};

int main()
{
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
=======
#include <iostream>
using namespace std;
template <typename T>
class node
{
public:
    T data; // int data;
    node<T> *next;

    node(T data) //(int data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack
{
    node<T> *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }

    void push(T elements) //(int elements)
    {
        node<T> *newnode = new node<T>(elements);
        newnode->next = head;
        head = newnode;
        size++;
    }

    T pop() // int pop()
    {
        if (isEmpty())
            return 0;
        // if (head==NULL) return 0;
        T ans = head->data;
        node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    T top() // int top()
    {
        if (isEmpty())
            return 0;
        // if (head == NULL) return 0;

        return head->data;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

};

int main()
{
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}