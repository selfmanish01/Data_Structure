<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;
template <typename T>

class TreeNode
{
public:
    int data;
    vector<TreeNode<T> *> children;
    TreeNode(int data)
    {
        this->data = data;
    }
};
TreeNode<int> *takeInput()
{
    int rootdata;
    cout << " Enter data ";
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    int n;

    cout << "Number of children of rootdata " << rootdata<<"  ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
void print(TreeNode<int> *root)
{
    if (root == nullptr){
        return ;
    }
       
    cout << root->data << " :";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << " , ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]);
    }
}
int main()
{
    TreeNode<int> *root = takeInput();
    print(root);
=======
#include <iostream>
#include <vector>
using namespace std;
template <typename T>

class TreeNode
{
public:
    int data;
    vector<TreeNode<T> *> children;
    TreeNode(int data)
    {
        this->data = data;
    }
};
TreeNode<int> *takeInput()
{
    int rootdata;
    cout << " Enter data ";
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    int n;

    cout << "Number of children of rootdata " << rootdata<<"  ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
void print(TreeNode<int> *root)
{
    if (root == nullptr){
        return ;
    }
       
    cout << root->data << " :";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << " , ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]);
    }
}
int main()
{
    TreeNode<int> *root = takeInput();
    print(root);
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}