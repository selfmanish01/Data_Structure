#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)     // answer not coming 
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
void findmiddlell(node *head)
{
   
    node *fast = head;
    node *slow = head;
    while (fast->next != NULL && fast->next->next != NULL )
    {
        slow = slow->next;
        fast = fast->next->next;
        
    }
   cout << slow-> data<<endl;
}

int main()
 {

        node * head =takeinput();
        // cout <<findmiddlell(head)<<endl;

     findmiddlell(head);
        return 0;
   
}