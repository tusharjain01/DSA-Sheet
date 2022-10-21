#include <stdio.h>
#include <stdlib.h>
struct node *front = NULL;
struct node *rear = NULL;
struct node
{
    int data;
    struct node *next;
};

void enqueue(int a)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("\nQueue is Full");
    }
    else{
        newnode->data = a;
        newnode->next = NULL;
        if(front == NULL){
            front = rear = newnode;


        }
        else{
            rear->next = newnode;
            rear= newnode;
        }
    }
}

void linkedListTraversal(struct node *ptr){
    printf("\nPrinting the Linked List : ");
    while(ptr != NULL){
        printf("%d->",ptr->data);
        ptr= ptr->next;
    }

}

void isEmpty(){
    if(front==NULL && rear == NULL){
        printf("\nThe Queue is Empty");
    }
    else{
        printf("\nThe Queue is not Empty");
    }
}

int dequeue()
{   
    int a = -1;
    struct node *temp = front;
    if(front != NULL && rear != NULL){
        front = front->next;
        a = temp->data;
        free(temp);
    }
    return a;
}


int main()
{

    linkedListTraversal(front);
    enqueue(3);
    enqueue(5);
    enqueue(15);
    int x = dequeue();
    linkedListTraversal(front);
    isEmpty();

    return 0;
}
