<<<<<<< HEAD
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
    TreeNode(int data)
    {
        this->data = data;
    }
};

TreeNode<int> *takeInputLevelWise()
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
        cout << "Enter Num of Children of" << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter" << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

// TreeNode<int> *takeInput()
// {
//     int rootData;
//     cout << "Enter Data" << endl;
//     cin >> rootData;
//     TreeNode<int> *root = new TreeNode<int>(rootData);
//     int n;
//     cout << "Enter the Number of Children of " << rootData << endl;
//     cin >> n;
//     for (int i = 1; i < n; i++)
//     {
//         TreeNode<int> *child = takeInput();
//         root->children.push_back(child);
//     }
//     return root;
// }

// void PrintTree(TreeNode<int> *root)
// {
//     if (root == NULL)
//         return;
//     cout << root->data << ":";
//     for (int i = 0; i < root->children.size(); i++)
//     {
//         cout << root->children[i]->data << ",";
//     }
//     cout << endl;
//     for (int i = 0; i < root->children.size(); i++)
//     {
//         PrintTree(root->children[i]);
//     }
// }
int countNode(TreeNode<int> *root)
{
    int count = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        count = count + countNode(root->children[i]);
    }
    return count;
}

int SumOfallthenode(TreeNode<int> *root)
{
    int count = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        count = count + SumOfallthenode(root->children[i]);
    }
    return count;
};


int countLeafNode2(TreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    if(root->children.empty()){
        return 1;
    }
    int maxcount = 0;
    for (int i = 0; i < root->children.size();i++){
        maxcount = maxcount + countLeafNode2(root->children[i]);
    }
    return maxcount;
};



int nodewithlargestData(TreeNode<int>*root){
    int largest = root->data;
    for (int i = 0; i < root->children.size();i++){
     if(largest<root->children[i]->data){
         largest = root->children[i]->data;
     }
    }
    return largest;
};

int heightOfGenericTree(TreeNode<int> * root){
         if (!root){
            return 0; 
         }
int maxHeight = 0;
for (int i = 0; i < root->children.size(); i++)
{
    int childHeight = heightOfGenericTree(root->children[i]);
    maxHeight = max(maxHeight, childHeight);
}

return maxHeight + 1; 
};
int countLeafNodes(TreeNode<int> *root)
{
    if (!root)
    {
        return 0;
    }

    if (root->children.empty())
    {
        return 1;
    }

    int leafCount = 0;

    for (int i = 0; i < root->children.size(); i++)
    {
        leafCount += countLeafNodes(root->children[i]);
    }

    return leafCount;
};



int main()
{
    /*
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    */
    TreeNode<int> *root = takeInputLevelWise();
    // PrintTree(root);
    // TODO delete the tree;
    // int Count = countNode(root);
    // int sum = SumOfallthenode(root);
    // int largest = nodewithlargestData(root);
    // cout<< "Number of nodes: " << Count << endl;
    // cout << "Sum of all nodes: " << sum << endl;
    // cout << "LArgest val " << largest << endl;
    int height = heightOfGenericTree(root);
    cout << "heightOfGenericTree" << height << endl;
    return 0;
};
=======
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
    TreeNode(int data)
    {
        this->data = data;
    }
};

TreeNode<int> *takeInputLevelWise()
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
        cout << "Enter Num of Children of" << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter" << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

// TreeNode<int> *takeInput()
// {
//     int rootData;
//     cout << "Enter Data" << endl;
//     cin >> rootData;
//     TreeNode<int> *root = new TreeNode<int>(rootData);
//     int n;
//     cout << "Enter the Number of Children of " << rootData << endl;
//     cin >> n;
//     for (int i = 1; i < n; i++)
//     {
//         TreeNode<int> *child = takeInput();
//         root->children.push_back(child);
//     }
//     return root;
// }

// void PrintTree(TreeNode<int> *root)
// {
//     if (root == NULL)
//         return;
//     cout << root->data << ":";
//     for (int i = 0; i < root->children.size(); i++)
//     {
//         cout << root->children[i]->data << ",";
//     }
//     cout << endl;
//     for (int i = 0; i < root->children.size(); i++)
//     {
//         PrintTree(root->children[i]);
//     }
// }
int countNode(TreeNode<int> *root)
{
    int count = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        count = count + countNode(root->children[i]);
    }
    return count;
}

int SumOfallthenode(TreeNode<int> *root)
{
    int count = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        count = count + SumOfallthenode(root->children[i]);
    }
    return count;
};


int countLeafNode2(TreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    if(root->children.empty()){
        return 1;
    }
    int maxcount = 0;
    for (int i = 0; i < root->children.size();i++){
        maxcount = maxcount + countLeafNode2(root->children[i]);
    }
    return maxcount;
};



int nodewithlargestData(TreeNode<int>*root){
    int largest = root->data;
    for (int i = 0; i < root->children.size();i++){
     if(largest<root->children[i]->data){
         largest = root->children[i]->data;
     }
    }
    return largest;
};

int heightOfGenericTree(TreeNode<int> * root){
         if (!root){
            return 0; 
         }
int maxHeight = 0;
for (int i = 0; i < root->children.size(); i++)
{
    int childHeight = heightOfGenericTree(root->children[i]);
    maxHeight = max(maxHeight, childHeight);
}

return maxHeight + 1; 
};
int countLeafNodes(TreeNode<int> *root)
{
    if (!root)
    {
        return 0;
    }

    if (root->children.empty())
    {
        return 1;
    }

    int leafCount = 0;

    for (int i = 0; i < root->children.size(); i++)
    {
        leafCount += countLeafNodes(root->children[i]);
    }

    return leafCount;
};



int main()
{
    /*
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    */
    TreeNode<int> *root = takeInputLevelWise();
    // PrintTree(root);
    // TODO delete the tree;
    // int Count = countNode(root);
    // int sum = SumOfallthenode(root);
    // int largest = nodewithlargestData(root);
    // cout<< "Number of nodes: " << Count << endl;
    // cout << "Sum of all nodes: " << sum << endl;
    // cout << "LArgest val " << largest << endl;
    int height = heightOfGenericTree(root);
    cout << "heightOfGenericTree" << height << endl;
    return 0;
};
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
