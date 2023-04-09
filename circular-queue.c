/*A circular queue is the extended version of a regular
queue where the last element is connected to the 
first element*/

#include<stdio.h>
#include<conio.h>
#define max 3

int q[max],rear=-1,front=-1;

void main(){ 
    int ch;

    do{ 
        printf("\nqueue implementation\n");
        printf("1.insert 2.delete 3.display 4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
 
        switch(ch){ 
            case 1:
                insert(); 
            break;
 
            case 2:
                delete(); 
            break;

            case 3:
                display(); 
            break;
 
            case 4:
                exit(1);
 
            default:
                printf("wrong choice\n"); 
            break;
        }
    } while(ch<=4);
        getch();
}


insert(){ 
    int item;

    if(rear==max-1){ 
        printf("queue overflow\n"); 
    } else { 
        if(front==-1)
        front=0;
        printf("insert the element in queue:");
        scanf("%d",&item);
        rear++;
        q[rear]=item;
    }
}

delete(){ 
    if(front==-1) { 
        printf("queue underflow\n");
    } else { 
        printf("element deleted from queue is:%d\n",q[front]);
        front++;
    
    if(front==max)
        front=rear=-1;
    }
}

display() { 
    int i;

    if(front==-1) {
        printf("queue is empty\n");
    } else { 
        printf("queue is :\n");
    
        for(i=front;;i++) { 
            printf("%2d",q[i]);
            if(i==rear)
 
        return;
        } 
    } 
}