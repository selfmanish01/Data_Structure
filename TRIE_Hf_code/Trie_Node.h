<<<<<<< HEAD
class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;
    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        isTerminal = false;
    }
=======
class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;
    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        isTerminal = false;
    }
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
};