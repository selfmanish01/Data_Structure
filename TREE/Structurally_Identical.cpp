#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class rootNode
{
public:
    T data;
    vector<rootNode<T> *> children;

    rootNode(int data)
    {
        this->data = data;
    }
};
TreeNode<int> *takeInputLevelwise()
{
    int rootData;
    cout << "Enter Root Data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << " Enter num of children of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i=0;i<numChild;i++){
            int childData;
            cout << "Enter"<<i<<" th child of"<<front -> data<<endl;
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

int main()
{
}