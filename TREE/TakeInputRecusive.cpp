<<<<<<< HEAD
#include <iostream>
#include <vector>

using namespace std;
template<typename T>
class TreeNode{
    public:
        int data;
        vector<TreeNode<T> *> children;
     TreeNode(int data){
         this->data = data;
        }
};
TreeNode<int>*takeInput(){
    int data;
    cout << " Take root data :";
    cin >> data;
    TreeNode<int> *root = new TreeNode(data);
    int n;
    cout << "Enter the number of children of root :" << data << endl;

     
    for (int i = 0; i < n; i++){
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
    // basically in last it will return a root of the tree so i have taken the this kind of return type
}
void printTree(TreeNode<int>*root){
   if ( root == NULL){
       return;
   }
   cout << root->data<<": ";
   for (int i = 0; i < root->children.size();i++){
       cout << root->children[i]->data << ",";
   }
   cout << endl;
   for (int i = 0; i < root->children.size();i++){
       printTree(root->children[i]);
   }

   // it won't return anything  so void is used here ;
}
void deleteTree(TreeNode<int> *root)
{
    if (root == nullptr)
    {
        return;
    }

    for (int i = 0; i < root->children.size(); ++i)
    {
        deleteTree(root->children[i]);
    }

    delete root;
}

int main(){
    TreeNode<int> *root = takeInput();
    printTree(root);
    delete root;
    deleteTree(root); // Deallocate memory
    return 0;
=======
#include <iostream>
#include <vector>

using namespace std;
template<typename T>
class TreeNode{
    public:
        int data;
        vector<TreeNode<T> *> children;
     TreeNode(int data){
         this->data = data;
        }
};
TreeNode<int>*takeInput(){
    int data;
    cout << " Take root data :";
    cin >> data;
    TreeNode<int> *root = new TreeNode(data);
    int n;
    cout << "Enter the number of children of root :" << data << endl;

     
    for (int i = 0; i < n; i++){
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
    // basically in last it will return a root of the tree so i have taken the this kind of return type
}
void printTree(TreeNode<int>*root){
   if ( root == NULL){
       return;
   }
   cout << root->data<<": ";
   for (int i = 0; i < root->children.size();i++){
       cout << root->children[i]->data << ",";
   }
   cout << endl;
   for (int i = 0; i < root->children.size();i++){
       printTree(root->children[i]);
   }

   // it won't return anything  so void is used here ;
}
void deleteTree(TreeNode<int> *root)
{
    if (root == nullptr)
    {
        return;
    }

    for (int i = 0; i < root->children.size(); ++i)
    {
        deleteTree(root->children[i]);
    }

    delete root;
}

int main(){
    TreeNode<int> *root = takeInput();
    printTree(root);
    delete root;
    deleteTree(root); // Deallocate memory
    return 0;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}