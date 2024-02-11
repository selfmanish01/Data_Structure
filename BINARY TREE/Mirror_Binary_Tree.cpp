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

void mirrorBinaryTree(BinaryTreeNode<int> *root)
{

    if (root == nullptr)
    {
        return;
    }

    BinaryTreeNode<int> *temp = root->left;
    root->left = root->right;
    root->right = temp;

    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
}

void printLevelOrder(BinaryTreeNode<int> *root)
{
    if (root == nullptr)
    {
        return;
    }

    queue<BinaryTreeNode<int> *> nodesQueue;
    nodesQueue.push(root);

    while (nodesQueue.size() != 0)
    {
        int size = nodesQueue.size();

        while (size--)
        {
            BinaryTreeNode<int> *front = nodesQueue.front();
            nodesQueue.pop();

            cout << front->data << " ";

            if (front->left != nullptr)
            {
                nodesQueue.push(front->left);
            }

            if (front->right != nullptr)
            {
                nodesQueue.push(front->right);
            }
        }

        cout << endl;
    }
}

int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    mirrorBinaryTree(root);
    printLevelOrder(root);
    delete root;
}