#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};

TreeNode<int> *takeInputLevelwise()
{
    int rootData;
    cout << "Enter Root Data: ";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (!pendingNodes.empty())
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter the number of children for node " << front->data << ": " << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter the value of the " << i + 1 << "th child of node " << front->data << ": " << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

bool search(TreeNode<int> *root, int x)
{
    if (root == nullptr)
        return false;

    if (root->data == x)
        return true;

    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *child = root->children[i];
        if (search(child, x))
            return true;
    }
    return false;
}

int main()
{
    int x;
    cout << "Enter the value to search: ";
    cin >> x;

    TreeNode<int> *root = takeInputLevelwise();

    bool isPresent = search(root, x);

    if (isPresent)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
