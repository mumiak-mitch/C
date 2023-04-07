#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
int priority;
int info;
struct node *link;
}n;
n *getnode()
{
return ( (n *)malloc(sizeof(n)));
}
n*front=NULL,*temp=NULL,*ptr=NULL,*q=NULL;
void insertion();
void deletion();
void display();
void main()
{
 int ch;
// clrscr();
printf("\tMenu\n1.Insertion\n2.Deletion\n3.Display\n4.exit");
 while(1)
 {
 printf("Enter your choice");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:insertion();
 break;
 case 2:deletion();
 break;
 case 3:display();
 break;
 //case 4:exit();
 default : printf("\nInvalid choice ");
 break;
 } } }
void insertion()
{ int item,item_prty;
 temp=getnode();
 printf("Enter item to insert ");
 scanf("%d",&item);
 printf("Enter item prority ");
 scanf("%d",&item_prty);
 temp->priority=item_prty;
 temp->info=item;
 if(front==NULL||item_prty>front->priority)
 {
 temp->link=front;
 front=temp;
 }
 else
 {
 q=front;
 while (q->link!=NULL &&q->link-> priority >=item_prty)
 q=q->link;
 temp->link=q->link;
 q->link=temp;
 }
}
void deletion()
{ if(front==NULL)
 printf("Queue is underflow");
 else
 {
 temp=front;
 printf("Deleted item is %d\n",
 temp->info);
 front=front->link;
 free(temp);
 }
}
void display()
{
ptr=front;
 if(front==NULL)
 printf("Queue is underflow");
 else
 {
 printf("Queue is :\n");
 printf("priority item :\n");
 while(ptr!=NULL)
 {
 printf("%5d %5d\n",ptr->priority,ptr->info);
 ptr=ptr->link;
 }
 }
}
