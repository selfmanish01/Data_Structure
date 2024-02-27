<<<<<<< HEAD
#include "Trie_Node.h";
#include <string>
using namespace std;
class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertWord(string word)
    {
        // base case
        if (word.size() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        // rcursive call

        insertWord(child, word.substr(1));
        }
    // for User
    void insertWord(string word)
    {
        insertWord(root, word);
    }
=======
#include "Trie_Node.h";
#include <string>
using namespace std;
class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertWord(string word)
    {
        // base case
        if (word.size() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        // rcursive call

        insertWord(child, word.substr(1));
        }
    // for User
    void insertWord(string word)
    {
        insertWord(root, word);
    }
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
};