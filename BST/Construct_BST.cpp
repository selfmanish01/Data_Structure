<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode<int> *constructBST(vector<int> &nums, int start, int end)
{
    if (start > end)
    {
        return nullptr;
    }

    int mid = (start + end) / 2;
    TreeNode<int> *root = new TreeNode<int>(nums[mid]);

    root->left = constructBST(nums, start, mid - 1);
    root->right = constructBST(nums, mid + 1, end);

    return root;
}

void preOrderTraversal(TreeNode<int> *root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    TreeNode<int> *root = constructBST(nums, 0, n - 1);

    preOrderTraversal(root);

    return 0;
}
=======
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode<int> *constructBST(vector<int> &nums, int start, int end)
{
    if (start > end)
    {
        return nullptr;
    }

    int mid = (start + end) / 2;
    TreeNode<int> *root = new TreeNode<int>(nums[mid]);

    root->left = constructBST(nums, start, mid - 1);
    root->right = constructBST(nums, mid + 1, end);

    return root;
}

void preOrderTraversal(TreeNode<int> *root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    TreeNode<int> *root = constructBST(nums, 0, n - 1);

    preOrderTraversal(root);

    return 0;
}
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
