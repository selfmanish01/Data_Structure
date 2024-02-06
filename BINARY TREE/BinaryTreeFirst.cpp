#include <iostream>
using namespace std;
// <template typename T>
template<typename T>
class BinaryTreeNode{
 public://access modifiers
     int data;
     BinaryTreeNode *left;
     BinaryTreeNode *right;
     BinaryTreeNode(int data){
         this->data = data;
         left = NULL;
         right = NULL;
     }
    ~BinaryTreeNode{
      delete left;
      delete right;
    }
};

void PrintTree(BinaryTreeNode<int>*root){
   if(root==NULL){
       return;
   }
   cout << root->data << ":"<<endl;
   if(root->left != NULL){
       cout << "L" << root->left->data;
   }
   if(root->right!=NULL){
       cout << "R" << root->right->data;
   }
   PrintTree(root->left);
   PrintTree(root->right);
};
BinaryTreeNode<int> *takeInput(){
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    if(rootData==-1){
        return NULL;

    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftChild = takeInput();
    BinaryTreeNode<int> *rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;

};
int main(){
    // BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> *rightNode = new BinaryTreeNode<int>(3);
    // root->left = leftNode;
    // root->right = rightNode;
    BinaryTreeNode<int> *newRoot = takeInput();
    PrintTree(newRoot);
}