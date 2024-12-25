#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data  = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};


void inorder(node* root){
    if (root == NULL)
    {
        return;
    }
    inorder(root -> left);
    cout<<root -> data<<" ";
    inorder(root -> right);
    
}
void preorder(node* root){
    if (root == NULL)
    {
        return;
    }
    cout<<root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
    
}
void postorder(node* root){
    if (root == NULL)
    {
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";
    
}
node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    
    cin>>data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    
    cout<<"Enter data to insert into left node: "<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter data to insert into Right node: "<<data<<endl;
    root -> right = buildTree(root -> right);
    return root;
}
int main(){
    node* root = NULL;

    root = buildTree(root);
    cout<<"inorder: ";
    inorder(root);
    cout<<endl<<"preorder: ";
    preorder(root);
    cout<<endl<<"postorder: ";
    postorder(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    return 0;

}