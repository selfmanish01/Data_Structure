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

bool checkBinarySearchTree(BinaryTreeNode<int> *root, int minValue, int maxValue)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->data < minValue || root->data > maxValue)
    {
        return false;
    }

    bool isLeftBST = checkBinarySearchTree(root->left, minValue, root->data - 1);
    bool isRightBST = checkBinarySearchTree(root->right, root->data, maxValue);

    return isLeftBST && isRightBST;
}

bool checkBinarySearchTree(BinaryTreeNode<int> *root)
{
    return checkBinarySearchTree(root, INT_MIN, INT_MAX);
}

int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    bool result = checkBinarySearchTree(root);

    cout << "Output for Binary Search Tree: " << (result ? "true" : "false") << endl;

    delete root;
   
}