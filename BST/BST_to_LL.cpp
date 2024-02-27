<<<<<<< HEAD
#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
    ~BinaryTreeNode()
    {
        delete right;
        delete left;
    }
};

BinaryTreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data: ";
    cin >> rootData;
    if (rootData == -1)
    {
        return nullptr;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        cout << "Enter the left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << "Enter the right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

class LinkedListNode
{
public:
    int data;
    LinkedListNode *next;

    LinkedListNode(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

void bstToSortedLLHelper(BinaryTreeNode<int> *root, LinkedListNode *&head, LinkedListNode *&tail);

LinkedListNode *bstToSortedLL(BinaryTreeNode<int> *root)
{
    if (root == nullptr)
    {
        return nullptr;
    }

    LinkedListNode *head = nullptr;
    LinkedListNode *tail = nullptr;

    bstToSortedLLHelper(root, head, tail);

    return head;
}

void bstToSortedLLHelper(BinaryTreeNode<int> *root, LinkedListNode *&head, LinkedListNode *&tail)
{
    if (root == nullptr)
    {
        return;
    }

    bstToSortedLLHelper(root->left, head, tail);

    LinkedListNode *newNode = new LinkedListNode(root->data);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }

    bstToSortedLLHelper(root->right, head, tail);
}

void printLinkedList(LinkedListNode *head)
{
    LinkedListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    LinkedListNode *sortedList = bstToSortedLL(root);
    printLinkedList(sortedList);
    delete root;
    return 0;
}
=======
#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
    ~BinaryTreeNode()
    {
        delete right;
        delete left;
    }
};

BinaryTreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data: ";
    cin >> rootData;
    if (rootData == -1)
    {
        return nullptr;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        cout << "Enter the left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << "Enter the right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

class LinkedListNode
{
public:
    int data;
    LinkedListNode *next;

    LinkedListNode(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

void bstToSortedLLHelper(BinaryTreeNode<int> *root, LinkedListNode *&head, LinkedListNode *&tail);

LinkedListNode *bstToSortedLL(BinaryTreeNode<int> *root)
{
    if (root == nullptr)
    {
        return nullptr;
    }

    LinkedListNode *head = nullptr;
    LinkedListNode *tail = nullptr;

    bstToSortedLLHelper(root, head, tail);

    return head;
}

void bstToSortedLLHelper(BinaryTreeNode<int> *root, LinkedListNode *&head, LinkedListNode *&tail)
{
    if (root == nullptr)
    {
        return;
    }

    bstToSortedLLHelper(root->left, head, tail);

    LinkedListNode *newNode = new LinkedListNode(root->data);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }

    bstToSortedLLHelper(root->right, head, tail);
}

void printLinkedList(LinkedListNode *head)
{
    LinkedListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    LinkedListNode *sortedList = bstToSortedLL(root);
    printLinkedList(sortedList);
    delete root;
    return 0;
}
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
