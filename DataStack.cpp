#include<stdio.h>
int n;
int first=0;
void Display(int arr[])
{

    for(int i=0; i<first; i++)
    {
        printf("%d ",arr[i]);
    }

}
void push(int arr[],int item)
{
    arr[first]=item;
    first++;
}
void pop(int arr[])
{
    first--;
}
int top(int arr[])
{
    return arr[first-1];
}
int main()
{
    printf("Enter Stack size :");
    scanf("%d",&n);
    int arr[n];
    printf("\n");


    push(arr,5);
    push(arr,6);push(arr,8);push(arr,3);push(arr,2);
    printf("After Push :");
    Display(arr);
    printf("\n");

    pop(arr);
    printf("After pop :");
    Display(arr);
    printf("\n");

    printf("Top is : %d",top(arr));
    printf("\n");
    Display(arr);


}
