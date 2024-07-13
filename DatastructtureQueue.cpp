#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int first=0,last=0,total=0,n,q=0;
void Display(int arr[])
{
    if(total==0)
    {
        cout<<"Queue is Empty..."<<endl;
    }
    else
    {
        for(int i=first; i<last; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
void push(int arr[],int item)
{
    if(last<n)
    {
        arr[last]=item;
        last++;
    }
    else
    {
        cout<<" Queue has no space "<<endl;
    }
}
void pop(int arr[])
{
    cout<<"pop value is :"<<arr[first]<<endl;
    first++;
}
int main()
{
    printf("Enter Queue size...");
    cin>>n;
    int arr[n];
    while(1)
    {
        system("CLS");
        cout<<"Current queue: ";
        Display(arr);
        cout<<endl<<endl<<"Enter your choice : "<<endl;
        printf("1.Insert..\n");
        printf("2.Delete..\n");
        printf("3.Exit...\n");
        int c;
        cin>>c;
        system("CLS");
        if(c==1)
        {
            if(last<n)
            {
                int item;
                cout<<"Enter item to insert: ";
                cin>>item;
                push(arr,item);
                total++;
            }
            else
            {
                printf("Queue Has no Space ...");
                Sleep(3000);
            }
        }
        else if(c==2)
        {
            if(first<n)
            {
                pop(arr);
            }
            else cout<<"Queue is Empty"<<endl;
        }
        else
        {
            break;
        }

    }


}
