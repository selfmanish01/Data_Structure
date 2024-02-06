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
    
};