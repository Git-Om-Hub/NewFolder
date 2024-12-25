#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this-> left = NULL;
        this-> right = right;
    }

};
node* insertIntoBst(node* &root,int d){
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }
    if (d > root -> data)
    {
        root -> right = insertIntoBst(root->right,d);
    }
    else{
        root -> left = insertIntoBst(root->left,d);
    }
    return root;
}
void takingInput(node* root){
    int data;
    cin>>data;
    while (data != -1)
    {
        root = insertIntoBst(root,data);
        cin>>data;
    }
    
}

void inorder(node* root){
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node* root = NULL;
    takingInput(root );

    
    return 0;
}