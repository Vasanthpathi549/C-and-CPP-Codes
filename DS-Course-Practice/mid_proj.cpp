#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void add(struct Node *head){
    struct Node *temp;
    int ele;
    printf("Enter element to be added: ");
    scanf("%d",&ele);
     temp->data = ele;
    temp->next = NULL;
    if( head==NULL)
    {   
        head=temp;
    }
    else
    {
        Node *p=head;
        while( p!=NULL){
            p=p->next;
        } 
        p=temp;
    }

        
}

void display(struct Node *head){
    struct Node *p;
    if(head==NULL)
        printf("No elements present\n");
    else{
        p=head;
        while(p!=NULL){
            printf("%d",p->data);
            p=p->next;
        }
    }

}
int main()
{
    struct Node *head;
    int ch,r=1;
    head=(Node*)malloc(sizeof(Node));
    while(r) {
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Add Elements:\n"); 
                    add(head);
                    break;
            case 2: printf("Display LinkedList:\n");
                    display(head);
                    break;
            case 0: exit(0); break;
        }
        r=1;
    }
    delete head;
}