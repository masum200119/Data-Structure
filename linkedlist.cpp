#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *link;
    node(int x)
    {
        data=x;
        link=NULL;
    }
};
void AddToLast(node* &head,int x)
{
    node *newnode=new node(x);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node *temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=newnode;
}
void AddToFirst(node* &head2,int x)
{
    node *newnode=new node(x);
    /*if(head2==NULL)
    {
        head2=newnode;
        return;
    }*/
    node *temp=head2;
    head2=newnode;
    head2->link=temp;
}
void deletelast(node* &head,int index)
{
    node *temp=head;
    index--;
    while(index--)
    {
        temp=temp->link;
    }
    temp->link=NULL;

}
void printlist(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->link;
    }
}
int main()
{
    node *head=NULL;
    //printf("How many NUMber you INsert :");
    cout<<"Add TO Last :";
    AddToLast(head,10);
    AddToLast(head,20);
    AddToLast(head,30);
    AddToLast(head,40);
    AddToLast(head,50);
    printlist(head);
    cout<<endl;
    cout<<"Add TO Fast :";
    node *head2=NULL;
    AddToFirst(head2,10);
    AddToFirst(head2,20);
    AddToFirst(head2,30);
    AddToFirst(head2,40);
    AddToFirst(head2,50);
    deletelast(head,5);
    printlist(head2);


}
