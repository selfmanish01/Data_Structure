<<<<<<< HEAD
#include <iostream>
#include <vector>

using namespace std;
template<typename T>
class TreeNode{
    public:

T data;
vector< TreeNode<T>* >Children;    
 TreeNode(int data){
    this -> data= data;
 }

};
int main (){
 
TreeNode <int>* root = new TreeNode<int >(1);
TreeNode <int>* node1 = new TreeNode<int >(2);
TreeNode <int>* node2= new TreeNode<int >(3);
root->Children.push_back(node1);
root->Children.push_back(node2);
}
=======
#include <iostream>
#include <vector>

using namespace std;
template<typename T>
class TreeNode{
    public:

T data;
vector< TreeNode<T>* >Children;    
 TreeNode(int data){
    this -> data= data;
 }

};
int main (){
 
TreeNode <int>* root = new TreeNode<int >(1);
TreeNode <int>* node1 = new TreeNode<int >(2);
TreeNode <int>* node2= new TreeNode<int >(3);
root->Children.push_back(node1);
root->Children.push_back(node2);
}
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
