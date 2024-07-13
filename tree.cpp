#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *l;
    node *r;
    node(int x)
    {
        data=x;
        l=NULL;
        r=NULL;
    }
};
void traversePreOrder(node *temp) {
  if (temp != NULL) {
    cout << " " << temp->data;
    traversePreOrder(temp->l);
    traversePreOrder(temp->r);
  }
}
node *createnode(int x)
{
    node *root=new node(x);
    return root;
}
int main()
{
  node *root = createnode(1);
  root->l = createnode(2);
  root->r = createnode(3);
  root->l->l = createnode(4);

  cout << "preorder traversal: ";
  traversePreOrder(root);
}
