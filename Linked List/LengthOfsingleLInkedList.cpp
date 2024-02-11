#include <iostream >
using namespace std;
class node {
    public:
    int data;
    node *next;
    node (int data){
        this -> data = data ;
        next=NULL;
    }
};
node *takeInput()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
}
int count = 0;

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
        count ++;

    }
    cout << "Total count is : " <<count <<endl;
}

int main (){
    node *head = takeInput();
    print (head);
}