#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define the structure for a singly linked list node
struct Node
{
    int data;
    struct Node* next;
};
struct Node *head = NULL;
// Function to create a new node
struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {

        return newNode;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
void insertAtBeginning( int data)
{
    struct Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node after a given node


// Function to delete a node with a given key
void deleteNode( int key)
{
    struct Node* temp = head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Key not found in the list.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to print the linked list
void printList()
{
    struct Node* current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to free the memory used by the linked list

int main()
{




    // Insert random elements
    insertAtBeginning(5);insertAtBeginning(6);insertAtBeginning(7);insertAtBeginning(8);


    printf("Linked List after random insertions: ");

    printList();

    return 0;
}
