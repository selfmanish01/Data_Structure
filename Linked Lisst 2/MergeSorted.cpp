#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

node *mergesort(node *head1, node *head2)
{
    if ( head1==NULL){
        return head2;

    }
    if ( head2== NULL){
        return head1;
    }
    node * mergehead=NULL;
    node * mergetail=NULL;
    
}

void print(node *head)
{
    if (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        node *head1 = takeinput();
        node *head2 = takeinput();

        node *mergehead = mergesort(head1, head2);
        print(mergehead);
    }
    return 0;
}