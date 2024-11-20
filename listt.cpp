#include<bits/stdc++.h>
#define ll long long
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
ll const M=1e9+7;
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
void last_insert(node* &head,int x)
{
    node* newNode=new node(x);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;

}
void first_insert(node* &head2,int x)
{
    node* newNode=new node(x);
    if(head2==NULL)
    {
        head2=newNode;
        return;
    }
    node* temp=head2;
    head2=newNode;
    head2->next=temp;

}
void middle_insert(node* &head,int index,int x)
{
    node* newNode=new node(x);
    node* temp=head;
    while(index--)
    {
        temp=temp->next;
    }
    node* temp2=temp->next;
    temp->next=newNode;
    newNode->next=temp2;
}

void traverse(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    //int_code();
    node* head=NULL;
    cout<<"Last Insert: ";
    last_insert(head,10);
    last_insert(head,20);
    last_insert(head,30);
    last_insert(head,40);
    last_insert(head,50);
    first_insert(head,10);
    traverse(head);
    cout<<endl;
    cout<<"First Insert: ";
    node* head2=NULL;
    first_insert(head2,10);
    first_insert(head2,20);
    first_insert(head2,30);
    traverse(head2);
    cout<<endl;
    cout<<"Enter your index: "<<endl;
    int n;
    cin>>n;
    cout<<"Insert Middle : ";
    middle_insert(head,n-1,35);
    traverse(head);


    return 0;
}
