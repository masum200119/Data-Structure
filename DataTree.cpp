#include<bits/stdc++.h>
using namespace std;
class node
{
public:

    int data;
     node *left;
     node *right;
    node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};
void preorderTraversal(node* nde)
{
    if(nde==NULL)
    {
        return;
    }
    cout<<nde->data<<"->";
    preorderTraversal(nde->left);
    preorderTraversal(nde->right);

}
void inorderTraversal(node* nde)
{
    if(nde==NULL)
    {
        return;
    }
    inorderTraversal(nde->left);
    cout<<nde->data<<"-> ";
    inorderTraversal(nde->right);
}
void postorderTraversal(node * nde)
{
    if(nde==NULL)
    {
        return;
    }
    postorderTraversal(nde->left);
    postorderTraversal(nde->right);
    cout<<nde->data<<"-> ";
}
int main()
{
    node*  root= new node(1);
    root->left=new node(12);
    root->right= new node(6);
    root->left->left=new node(13);
    root->left->right=new node(14);
    root->right->right= new node(7);
    root->right->left= new node(5);

    cout << "Preorder traversal ";
    preorderTraversal(root);
    cout<<endl;
    cout<<endl;
    cout << "Inorder traversal ";
    inorderTraversal(root);
    cout<<endl;
    cout<<endl;
    cout << "Postorder traversal ";
    postorderTraversal(root);
    cout<<endl;
    cout<<endl;

    return 0;

}
