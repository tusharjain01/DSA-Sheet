#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void print_list(struct node **head) {
    if(*head == NULL) {
        printf("\nList is empty........");
    }
    else {
        struct node *p = *head;
        while(p != NULL) {
            printf("%d ",p->data);
            p = p->link;
        }   
    }
}
void insert_end(struct node **head) {
    int value;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d",&value);
    
    temp->data = value;
    temp->link = NULL;
    
    struct node *p = *head;  //TO TRAVERSE UNTIL LAST NODE
    if(p == NULL)   // EMPTY LIST CONDITION
    *head = temp;
    else{
        while(p->link != NULL) {
            p = p->link;
        }
        p->link = temp;
    }
}

void insert_beg(struct node **head) {
    int value;
    printf("\nEnter the value : ");
    scanf("%d",&value);
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = *head;
    *head = temp;
}

void insert_spos(struct node **head) {
    int index,value;
    printf("\nEnter the index and value : ");
    scanf("%d%d",&index,&value);
    int count = 1;
    struct node *p = *head;
    while(p != NULL) {
        if(count == index)
        break;
        else {
            p = p->link;
            count++;
        }
    }
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = p->link;
    p->link = temp;
    printf("\nValue added successfullly.");
}

void deletion(struct node **head) {
    if(*head == NULL) {
        printf("\nList is empty.....");
    }
    else {
        int value;
        printf("\nEnter the value to be deleted : ");
        scanf("%d",&value);
        
        struct node *p = *head;
        struct node *q = NULL;
        
        if(value == p->data) {
            *head = p->link;
            free(p);
        }
        while(p != NULL) {
            if(p->data == value)
            break;
            else {
                q = p;
                p = p->link;
            }
        }
        q->link = p->link;
        p->link = NULL;
        free(p);
        printf("\nValue deleted successfully.");
    }
    
        
}

void search(struct node **head) {
    int value,a = 0;
    printf("\nEnter a value to search : ");
    scanf("%d",&value);
    
    struct node *p = *head;
    while(p != NULL)  {
        if(p->data == value) {
            a = 1;
            break;
        }
        else
        p = p->link;
    }
    if(a == 1)
    printf("\nThe entered value is present in the list. ");
    else
    printf("\nThe entered value is not present in the list. ");
}

void print(struct node **head) {
    if(*head == NULL) {
        printf("\nList us empty.....");
    }
    else {
        struct node *temp = *head;
        while(temp != NULL) {
            printf("%d ",temp->data);
            temp = temp->link;
        }
    }
}

int main() {
    int option;
    struct node *head = NULL;
    printf("\n<--Singly linked list-->");
    while(1){
        printf("\n1.Insertion at end\n2.Insertion at specified position\n3.Deletion\n4.Search\n5.Print List\n6.Insertion at beginning\n7.Exit\nEnter the option : ");
        scanf("%d",&option);
        
        if(option == 1)
        insert_end(&head);
        else if(option == 2)
        insert_spos(&head);
        else if(option == 3)
        deletion(&head);
        else if(option == 4)
        search(&head);
        else if(option == 5)
        print_list(&head);
        else if(option == 6)
        insert_beg(&head);
        else 
        break;
    }
        
        
    return 0;
}
        
