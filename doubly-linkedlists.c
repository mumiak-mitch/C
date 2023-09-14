/*A double linked list is a linked data structure that
consists of a set of sequentially linked records called
nodes. Each node contains three fields: two link fields and one data field*/

#include<stdio.h>
#include<conio.h>

struct node {
    struct node *prev; int data;
    struct node *nxt;
}

*head=NULL,*curr=NULL,*curr1=NULL,*p;
void insert(int pos) {
    int count=1,i; p=head;
    while(p->nxt!=NULL) {
        count++; 
        p=p->nxt;
    }
    p=head;
    if(pos<=count+1) {
        curr=(struct node*)malloc(sizeof(struct node));
        printf("Enter the node:");
        scanf("%d",&curr->data);
        curr->nxt=NULL;
        curr->prev=NULL;
        
        if(head==NULL) {
            head=curr; 
        } else if(pos==1) {
            head->prev=curr;
            curr->nxt=head;
            head=curr; 
        } else { 
            for(i=1;i<(pos-1);i++) p=p->nxt;
            curr->prev=p; curr->nxt=p->nxt;
            p->nxt->prev=curr;
            p->nxt=curr;
        }
    
        printf("\n%d inserted at pos:%d!\n",curr->data,pos);
    } else
        printf("\nEnter a valid position!");
    } void deletenode(int data) {
        int found=0; curr=head; 
        if(head->data == data) {
            (head->nxt)->prev=NULL; head=head->nxt;
            printf("\n%d deleted!\n",curr->data);
            free(curr);
        } else {
            curr=curr->nxt;
            while(curr->nxt!=NULL) {
                if(curr->data==data) {
                        found=1;
                    break;
                } else
                    curr=curr->nxt;
            }
        if(found==1 || curr->data==data) {
            curr1=curr->prev;
            curr1->nxt=curr->nxt;
            (curr->nxt)->prev=curr1;
            //printf("\n%d deleted!\n",currl->data); free(currl);
        } else
            printf("\n%d is not present in the list!\n",data);
    } 
}

void display()  {
    curr=head;
    if(head==NULL)
        printf("\nList is empty!\n"); 
    else {
    printf("\nList:\n"); 
    while(curr->nxt!=NULL) {
        printf("%d\t",curr->data); curr=curr->nxt;
    }
    printf("%d\n",curr->data);
    }
}

void main() {
    int op,data;

    printf("Creation of Doubly Linked List\n");
    curr=(struct node*)malloc(sizeof(struct node));
    curr->nxt=NULL;
    curr->prev=NULL; 
    printf("Enter the first node:"); 
    scanf("%d",&curr->data); 
    head=curr;
    head->nxt=NULL; 
    head->prev=NULL; 
    
    do { 
        printf("\nDOUBLY LINKED LIST OPERATIONS:\n1.Insert a node ");
        printf("\n2.Delete a node\n3.Display\n4.Exit\n");
        printf("\nSelect an operation:"); 
        scanf("%d",&op);
        
        switch(op) {
            case 1: { 
                printf("Enter the position where you want to insert the node:"); scanf("%d",&data);
                insert(data); 
                break;
            }

            case 2:{
                printf("Enter the node to be deleted:"); scanf("%d",&data);
                deletenode(data); 
                break; 
            }

            case 3: {
                display();
                break; 
            }

            case 4:
                break;
            
            default:
                printf("\nEnter a valid option!");
        }
    }while(op!=4);

    getch();
}