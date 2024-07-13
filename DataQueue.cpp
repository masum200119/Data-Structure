#include<stdio.h>
const int N=1000;
int i=0,j=0,n;
int arr[N];
void push(int x)
{
    if(i<n)
    {
        arr[i]=x;
        i++;
    }
    else
    {
        printf("Queue Overflowed.. \n");
    }
}
void top()
{
    printf("Top : %d",arr[j]);
    printf("\n");
}
void pop()
{
    j++;
}
void display()
{
    if(i==j)
    {
        printf("Queue Empty.. \n");
    }
    else
    {
        for(int l=j; l<i; l++)
        {
            printf("%d ",arr[l]);
        }
    }
}
int main()
{
    printf("Enter Queue Size : ");
    scanf("%d",&n);
    push(6);
    push(7);
    push(9);
    push(5);
    push(8);
    display();
    printf("\n");
    top();
    pop();
    display();

}
