<<<<<<< HEAD
#include <iostream>
// # include "class.h"
#include <vector>
using namespace std;
template<typename T>

class TreeNode{
    // access modifiers in class , do not forget to write this in the code 
    
    public:
    int data;
    vector<TreeNode<T> *> children;

    TreeNode(T data){
        this->data = data;
    }
};
int main(){
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *children1 = new TreeNode<int>(2);
    TreeNode<int> *children2 = new TreeNode<int>(3);
    root->children.push_back(children1);
    root->children.push_back(children2);
    for (int i = 0; i < root->children.size();i++){
        cout << root->children[i]->data << endl;

    }
    delete root;
    delete children1;
    delete children2;
    return 0;
=======
#include <iostream>
// # include "class.h"
#include <vector>
using namespace std;
template<typename T>

class TreeNode{
    // access modifiers in class , do not forget to write this in the code 
    
    public:
    int data;
    vector<TreeNode<T> *> children;

    TreeNode(T data){
        this->data = data;
    }
};
int main(){
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *children1 = new TreeNode<int>(2);
    TreeNode<int> *children2 = new TreeNode<int>(3);
    root->children.push_back(children1);
    root->children.push_back(children2);
    for (int i = 0; i < root->children.size();i++){
        cout << root->children[i]->data << endl;

    }
    delete root;
    delete children1;
    delete children2;
    return 0;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}