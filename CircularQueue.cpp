#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int first=0,last=0,total=0;
int n;
void Display(int arr[])
{
    if(total==0)
    {
        printf("Queue is Empty....\n");
    }
    else
    {
        for(int i=0; i<total; i++)
        {
            cout<<arr[(first+i)%n]<<" ";
        }
    }
}
void push(int arr[],int item)
{
    arr[last%n]=item;
    last++;
}
void pop(int arr[])
{

    printf("POPPed Value Is : %d",arr[first%n]);
    first++;
    Sleep(3000);
}
int main()
{
    int item;
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

            if(total<n)
            {
                total++;
                cout<<"Enter item to insert: ";
                cin>>item;
                push(arr,item);
            }
            else
            {
                printf("Queue is Overloaded");
                Sleep(3000);
            }
        }
        else if(c==2)
        {
            if(total>0)
            {
                total--;
                pop(arr);

            }
            else
            {
                printf("There is No item to Delete from Queue...");
                Sleep(3000);
            }
        }
        else
        {
            break;
        }
    }
}
