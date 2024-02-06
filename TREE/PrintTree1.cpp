#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class TreeNode
{
public:
    int data;
    vector<TreeNode<int> *> children;
    TreeNode(int data)
    {
        this->data = data;
    }
};
template <typename T>
void PrintTree(TreeNode<T> *root)
{
    cout << root->data << ":";
    for (int i = 0; i < root->children.size();i++){
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
     PrintTree(root->children[i]);
    }
};

int main()

{

    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);

    root->children.push_back(node1);
    root->children.push_back(node2);
    PrintTree(root);
    delete root;
    delete node1;
    delete node2;
};