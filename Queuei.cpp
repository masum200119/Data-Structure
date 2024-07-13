#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int qs,f=0,l=0,t=0;
void push(int *q,int item)
{
    q[l]=item;
    l++;
}
void pop(int *q)
{
    printf("POPPed value is %d ",q[f]);
    f++;
}
void display(int *q)
{
    if(t==0)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        for(int i=f; i<l; i++)
        {
            cout<<q[i]<<" ";
        }
    }
}
int main()
{
    int *q,item,choice;
    cout<<"Enter queue size: ";
    cin>>qs;
    q=(int *)malloc(qs*sizeof(int));
    while(1)
    {
        system("CLS");
        printf("Current Queue: ");
        display(q);
        cout<<endl;
        printf("Enter Your Choice :");
        cout<<endl;
        //cout<<endl<<"Enter your choice : "<<endl;
        cout<<"1. Insert."<<endl;
        cout<<"2. Delete."<<endl;
        cout<<"3. Exit."<<endl;
        cin>>choice;
        system("CLS");
        if(choice==1)
        {
            if(l<qs)
            {
                printf("Enter YOur item :");
                cin>>item;
                push(q,item);
                t++;
            }
            else
            {
                printf("Queue is Overflow....");
                Sleep(2000);
            }
        }
        else if(choice==2)
        {
            if(f<qs)
            {
                pop(q);
                t--;
            }
            else
            {
                cout<<"Queue is empty :"<<endl;
                Sleep(2000);
            }
        }
        else break;
    }
    return 0;
}
