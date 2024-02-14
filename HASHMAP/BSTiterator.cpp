#include <stack>
#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



class BSTIterator
{
private:
    stack<TreeNode *> nodeStack;

public:
    BSTIterator(TreeNode *root)
    {
        // Push all left nodes onto the stack to start with the smallest element
        while (root != nullptr)
        {
            nodeStack.push(root);
            root = root->left;
        }
    }

    int next()
    {
        TreeNode *currNode = nodeStack.top();
        nodeStack.pop();

        // If the popped node has a right subtree, push all its left descendants onto the stack
        if (currNode->right != nullptr)
        {
            TreeNode *rightSubtree = currNode->right;
            while (rightSubtree != nullptr)
            {
                nodeStack.push(rightSubtree);
                rightSubtree = rightSubtree->left;
            }
        }

        return currNode->val;
    }

    bool hasNext()
    {
        return !nodeStack.empty();
    }
};

// Example usage:
int main()
{
    TreeNode *root = new TreeNode(7);
    root->left = new TreeNode(3);
    root->right = new TreeNode(15);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(20);

    BSTIterator *obj = new BSTIterator(root);
    cout << obj->next() << endl;    // Output: 3
    cout << obj->next() << endl;    // Output: 7
    cout << obj->hasNext() << endl; // Output: 1 (true)
    cout << obj->next() << endl;    // Output: 9
    cout << obj->hasNext() << endl; // Output: 1 (true)
    cout << obj->next() << endl;    // Output: 15
    cout << obj->hasNext() << endl; // Output: 1 (true)
    cout << obj->next() << endl;    // Output: 20
    cout << obj->hasNext() << endl; // Output: 0 (false)

    delete obj;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}
