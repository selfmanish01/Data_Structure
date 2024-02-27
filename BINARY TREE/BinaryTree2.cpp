<<<<<<< HEAD
#include <iostream>
#include "Class.h"
#include <queue>
using namespace std;

void printTree(BinaryTreeNode<int> *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " : ";
    if (root->left != nullptr)
    {
        cout << " L " << root->left->data;
    }
    if (root->right != nullptr)
    {
        cout << " R " << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}
BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter Data : " << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return nullptr;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

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

        cout << " Enter the left Child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << " Enter the right child of " << front->data << endl;
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
int main()
{
    // BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    // root->left = node1;
    // root->right = node2;
    BinaryTreeNode<int> *root = takeInputLevelWise();

    printTree(root);
    delete root;
=======
#include <iostream>
#include "Class.h"
#include <queue>
using namespace std;

void printTree(BinaryTreeNode<int> *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " : ";
    if (root->left != nullptr)
    {
        cout << " L " << root->left->data;
    }
    if (root->right != nullptr)
    {
        cout << " R " << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}
BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter Data : " << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return nullptr;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

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

        cout << " Enter the left Child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << " Enter the right child of " << front->data << endl;
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
int main()
{
    // BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    // root->left = node1;
    // root->right = node2;
    BinaryTreeNode<int> *root = takeInputLevelWise();

    printTree(root);
    delete root;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}