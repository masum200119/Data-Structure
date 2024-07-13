#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
void AddToLast(node* &head,int x)
{
    node *newnode = new node(x);
    if(head==NULL)
    {

        head=newnode;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void AddToFirst(node* &head2,int x)
{
    node *newnode = new node(x);
    node *temp; //3 4 5 6 7
    temp= head2;
    head2=newnode;
    head2->next=temp;
}
void printlist(node *head)
{

    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void DeleteLast(node* &head)
{
    node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
void DeleteEntireposition(node* &head,int pos)
{
    int p=pos-1;
    node *temp=head;
    while(p--)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
void AfterElement(node* head,int x)
{
    node *temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data==x)
        {
            temp=temp->next;
            break;
        }
    }
    temp->next=temp->next->next;
}
int main()
{
    node *head = NULL;
    node *head2 = NULL;

    printf("Enter Size : " );
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cout<< "Enter Your Item  : ";
        cin>>x;
        AddToLast(head,x);
        AddToFirst(head2,x);
    }

    DeleteLast(head);
    cout<<endl;

    DeleteLast(head2);
    //printlist(head2);
    cout<<endl;
    printf("Enter Position You Want to Delete :");
    int p;
    cin>>p;
    DeleteEntireposition(head,p-1);
    DeleteEntireposition(head2,p-1);
    printf("Add to First position : ");
    printlist(head2);
    cout<<endl;
    //AfterElement(head,2);
    printf("Add to Last position : ");
    printlist(head);

}
