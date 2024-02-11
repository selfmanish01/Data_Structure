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

template <typename T>
class BST
{
    BinaryTreeNode<T> *root;

public:
    BST()
    {
        root = nullptr;
    }

    ~BST()
    {
        delete root;
    }

    bool hasData(T data)
    {
        return hasData(data, root);
    }

    void insert(T data)
    {
        root = insert(data, root);
    }

    void deleteData(T data)
    {
        root = deleteData(data, root);
    }

private:
    bool hasData(T data, BinaryTreeNode<T> *node)
    {
        if (node == nullptr)
            return false;
        if (node->data == data)
            return true;
        else if (data < node->data)
            return hasData(data, node->left);
        else
            return hasData(data, node->right);
    }

    BinaryTreeNode<T> *insert(T data, BinaryTreeNode<T> *node)
    {
        if (node == nullptr)
        {
            return new BinaryTreeNode<T>(data);
        }
        if (data <= node->data)
        {
            node->left = insert(data, node->left);
        }
        else
        {
            node->right = insert(data, node->right);
        }
        return node;
    }

    BinaryTreeNode<T> *findMin(BinaryTreeNode<T> *node)
    {
        if (node->left == nullptr)
            return node;
        return findMin(node->left);
    }

    BinaryTreeNode<T> *deleteData(T data, BinaryTreeNode<T> *node)
    {
        if (node == nullptr)
            return nullptr;
        if (data < node->data)
        {
            node->left = deleteData(data, node->left);
        }
        else if (data > node->data)
        {
            node->right = deleteData(data, node->right);
        }
        else
        {
            if (node->left == nullptr && node->right == nullptr)
            {
                delete node;
                node = nullptr;
            }
            else if (node->left == nullptr)
            {
                BinaryTreeNode<T> *temp = node;
                node = node->right;
                delete temp;
            }
            else if (node->right == nullptr)
            {
                BinaryTreeNode<T> *temp = node;
                node = node->left;
                delete temp;
            }
            else
            {
                BinaryTreeNode<T> *minNode = findMin(node->right);
                node->data = minNode->data;
                node->right = deleteData(minNode->data, node->right);
            }
        }
        return node;
    }

    void printTree(BinaryTreeNode<int> *root)
    {
        if (root == nullptr)
        {
            return;
        }
        cout << root->data << " : ";
        if (root->left != nullptr)
        {
            cout << " L " << root->left->data;
        }
        if (root->right != nullptr)
        {
            cout << " R " << root->right->data;
        }
        cout << endl;
        printTree(root->left);
        printTree(root->right);
    }

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
};

int main()
{
    BST<int> bst;
    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(2);
    bst.insert(4);
    bst.insert(6);
    bst.insert(8);

    
    cout << "Has 4: " << bst.hasData(4) << endl;
    cout << "Has 9: " << bst.hasData(9) << endl;

    // BinaryTreeNode<int> *root = takeInputLevelWise();
    bst.deleteData(3);
}