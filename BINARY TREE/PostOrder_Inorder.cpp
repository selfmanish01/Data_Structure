#include <iostream>
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
        left = nullptr;
        right = nullptr;
    }

    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

void printTree(BinaryTreeNode<int> *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

BinaryTreeNode<int> *buildTreeHelper(int *post, int *in, int postS, int postE, int inS, int inE)
{
    if (postS > postE || inS > inE)
    {
        return nullptr;
    }

    int rootData = post[postE];
    int rootIndex = -1;
    for (int i = inS; i <= inE; i++)
    {
        if (in[i] == rootData)
        {
            rootIndex = i;
            break;
        }
    }

    int LinS = inS;
    int LinE = rootIndex - 1;
    int RinS = rootIndex + 1;
    int RinE = inE;
    int LpostS = postS;
    int LpostE = LinE - LinS + LpostS;
    int RpostS = LpostE + 1;
    int RpostE = postE - 1;

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    root->left = buildTreeHelper(post, in, LpostS, LpostE, LinS, LinE);
    root->right = buildTreeHelper(post, in, RpostS, RpostE, RinS, RinE);
    return root;
}

BinaryTreeNode<int> *buildTree(int *post, int *in, int size)
{
    return buildTreeHelper(post, in, 0, size - 1, 0, size - 1);
}

int main()
{
    int in[] = {2,6,3,9,5,10};
    int post[] = {2,9,3,6,10,5};

    BinaryTreeNode<int> *root = buildTree(post, in, 6);
    printTree(root);

    delete root;
}
