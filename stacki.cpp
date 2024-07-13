#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int sz;
int l=0,r=sz-1,t=0;
void push(int *p,int item,int sz)
{
    if(l<sz)
    {
        p[l]=item;
    }
    else
    {
        printf("STack id full...");
    }
}
void pop(int *p)
{
    printf("Popped Item is...");
    cout<<p[r];
    r--;
}
/*void top(int *p)
{
    printf("Top is...")
    cout<<p[r]<<endl;
}*/
void display(int *p,int sz)
{
    for(int i=l;i<sz;i++)
    {
        cout<<p[i]<<" ";
    }
}
int main()
{
    int *p,item,choice;
    printf("Enter Your Size.");
     cin>>sz;

    p=(int *)malloc(sz*sizeof(int));

    while(1)
    {
        system("CLS");
        printf("Current stack");
        display(p,sz);
        cout<<endl<<endl;
        printf("1.INsert..\n");
        printf("2.Pop..\n");
        printf("3.Top..\n");
        printf("4.Exit..\n");

        //int choice;
        cin>>choice;
        system("CLS");
        if(choice==1)
        {
            if(l<sz)
            {
                printf("Enter Your Item :");
                push(p,item,sz);
                t++;
            }
            else
            {
                printf("System Overflow...");
                Sleep(5000);
            }
        }
        else if(choice==2)
        {
            if(t==0)
            {
                printf("Stack is Empty...");
                Sleep(5000);
            }
            else
            {
                pop(p);
                t--;
            }
        }
       /* else if(choice==3)
        {
            if(t>0)
            {
                top(p);
            }
            else
            {
                printf("Stack is Empty...");
                Sleep(2000);
            }
        }*/
        else break;
    }
    return 0;
}
