<<<<<<< HEAD
template < typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode * left;
    BinaryTreeNode * right ;
    BinaryTreeNode(T data){

        this -> data = data;
        right = NULL;
        left = NULL;

    }
    ~BinaryTreeNode(){
        delete right ;
        delete left;
    }
    
=======
template < typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode * left;
    BinaryTreeNode * right ;
    BinaryTreeNode(T data){

        this -> data = data;
        right = NULL;
        left = NULL;

    }
    ~BinaryTreeNode(){
        delete right ;
        delete left;
    }
    
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
};