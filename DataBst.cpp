 #include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
node * create_Node(int data)
{
    node *newnode= new node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
node * Insert_Node(node *root,int data)
{
    if(root==NULL)
    {
        root=create_Node(data);
    }
    else if(data<=root->data)
    {
        root->left=Insert_Node(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=Insert_Node(root->right,data);
    }
}

void preorder(node* root)
{
    if(root==NULL) return;
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
void Inorder(node* root)
{
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->data<<"->";
    Inorder(root->right);
}
void Postorder(node* root)
{
    if(root==NULL) return;
    Postorder(root->left);

    Postorder(root->right);
    cout<<root->data<<"->";
}
int main()
{
    node *root=NULL;
    root=Insert_Node(root,10);
    root=Insert_Node(root,20);
    root=Insert_Node(root,5);
    root=Insert_Node(root,30);
    root=Insert_Node(root,3);
    root=Insert_Node(root,7);
    root=Insert_Node(root,40);
    root=Insert_Node(root,13);
    cout<<endl;
    preorder(root);
    cout<<endl;
    Inorder(root);
    cout<<endl;
    Postorder(root);
    cout<<endl;
}
