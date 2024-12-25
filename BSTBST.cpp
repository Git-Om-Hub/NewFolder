#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this ->data = d;
        this ->left = NULL;
        this ->right = NULL;
    }
};

node* insertIntoBST(node* &root,int data){
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }
    if (data > root->data)
    {
        root->right = insertIntoBST(root->right,data);
    }
    else{
        root->left = insertIntoBST(root -> left, data);
    }
    return root;
}
void takingInput(node* root){
int data;
cin>>data;
    while (data != -1)
    {
       root= insertIntoBST(root,data);
        cin>>data;
    }
    
}
bool searchInBst(node* root,int x){
    if (root == NULL)
    {
        return false;
    }
    if(root-> data == x){
        return true;
    }
    if(root->data > x){
        return searchInBst(root->left,x);
    }
    else{
        return searchInBst(root->right,x);
    }
}
int main(){
    node* root = NULL;
    cout<<"Enter data to create bst: "<<endl;
    takingInput(root);
    return 0;
}