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

int countNodesGreaterThanX(TreeNode<int> *root, int x)
{
    int count = 0;

    if (root->data > x)
        count++;

    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *child = root->children[i];
        count += countNodesGreaterThanX(child, x);
    }

       return count;
}

int main()
{
    int x;
    cout << "Enter the value to compare: ";
    cin >> x;

    TreeNode<int> *root = takeInputLevelwise();

    int count = countNodesGreaterThanX(root, x);

    cout << "Count of nodes greater than " << x << ": " << count << endl;

    return 0;
}