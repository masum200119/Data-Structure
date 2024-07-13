#include<bits/stdc++.h>
#include<Windows.h>
using namespace std;
int first=0,last=0,q_sz,total=0;
void push(int *q, int item)
{
    q[last%q_sz]=item;
    last++;
}
void pop(int *q)
{
    cout<<"The popped value is "<<q[first%q_sz]<<endl;
    Sleep(3000);
    first++;
}
void display(int *q)
{
    int i;
    if(total==0)
        cout<<"Empty queue. ";
    else
    {
        for(i=0; i<total; i++)
        {
            cout<<q[(first+i)%q_sz]<<" ";
        }
    }
}
int main()
{
    int i, *circular_q,choice,item;
    cout<<"Enter queue size: ";
    cin>>q_sz;
    circular_q =new int [q_sz];
    while(1)
    {

        system("CLS");
        cout<<"Current queue: ";
        display(circular_q);
        cout<<endl<<endl<<"Enter your choice : "<<endl;
        cout<<"1. Insert."<<endl;
        cout<<"2. Delete."<<endl;
        cout<<"3. Exit."<<endl;
        cin>>choice;
        system("CLS");
        if(choice==1)
        {
            if(total<q_sz)
            {
                cout<<"Enter item to insert: ";
                cin>>item;
                push(circular_q, item);
                total++;
            }
            else
            {
                cout<<"Queue overflow. ";
                Sleep(2);
            }
        }
        else if(choice==2)
        {
            if(total>0)
            {
                pop(circular_q);
                total--;
            }
            else
            {
                cout<<"Queue Underflow. ";
                Sleep(2000);
            }
        }
        else if(choice==3)
        {
            break;
        }
    }

    return 0;
}
