#include<stdio.h>
#include<stdlib.h>
typedef struct nodeType{
    struct nodeType * next;
    int info;
}node;
void insertatbeg(node * head,int item);
void traverse(node * head);
void main()
{
    node * head;
    node * second;
    int item;
    head=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    head->info=11;
    head->next=second;
    second->info=12;
    second->next=NULL;
    insertatbeg( head, item);
    traverse(head);
       traverse(head);
}
void traverse(node * head)
{
    node * ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->info);
        ptr=ptr->next;
    }
}
      void insertatbeg(node * head,int item)
{
    node * ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("Enter the item to insert");
    scanf("%d",&item);
    ptr->info=item;
    ptr->next=head;
    head=ptr;
}

