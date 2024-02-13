#include <iostream>
#include <utility> // For std::pair

template <typename KeyType, typename ValueType>
class TreeNode
{
public:
    KeyType key;
    ValueType value;
    TreeNode *left;
    TreeNode *right;

    TreeNode(KeyType key, ValueType value) : key(key), value(value), left(nullptr), right(nullptr) {}
};

template <typename KeyType, typename ValueType>
class BSTHashMap
{
private:
    TreeNode<KeyType, ValueType> *root;

    // Helper function for recursive insertion
    TreeNode<KeyType, ValueType> *put(TreeNode<KeyType, ValueType> *node, KeyType key, ValueType value)
    {
        if (node == nullptr)
        {
            return new TreeNode<KeyType, ValueType>(key, value);
        }

        if (key < node->key)
        {
            node->left = put(node->left, key, value);
        }
        else if (key > node->key)
        {
            node->right = put(node->right, key, value);
        }
        else
        {
            node->value = value; // Update value if key already exists
        }
        return node;
    }

    // Helper function for recursive search
    ValueType get(TreeNode<KeyType, ValueType> *node, KeyType key)
    {
        if (node == nullptr)
        {
            return ValueType(); // Return default value if key not found
        }

        if (key < node->key)
        {
            return get(node->left, key);
        }
        else if (key > node->key)
        {
            return get(node->right, key);
        }
        else
        {
            return node->value; // Return value if key found
        }
    }

public:
    BSTHashMap() : root(nullptr) {}

    void put(KeyType key, ValueType value)
    {
        root = put(root, key, value);
    }

    ValueType get(KeyType key)
    {
        return get(root, key);
    }
};

int main()
{
    BSTHashMap<std::string, int> hashMap;
    hashMap.put("apple", 5);
    hashMap.put("banana", 10);
    hashMap.put("orange", 15);

    std::cout << "Value of apple: " << hashMap.get("apple") << std::endl;   // Output: 5
    std::cout << "Value of banana: " << hashMap.get("banana") << std::endl; // Output: 10
    std::cout << "Value of orange: " << hashMap.get("orange") << std::endl; // Output: 15
    std::cout << "Value of grape: " << hashMap.get("grape") << std::endl;   // Output: 0 (default int value)

    return 0;
}
