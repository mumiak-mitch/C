/*The fibonacci sequence is a set of integers that starts with 
a zero, followed by one, then by another one, and then by a series
of steadily increasing numbers. The sequence follows the rule
that each number is equal to the sum of the preceding two
numbers.*/

#include<stdio.h>

void main() {
    int n,a[50],i,key,loc,p,q,r,m,fk;

    printf("\nenter number elements to be entered");
    scanf("%d",&n);
    printf("enter elements");
 
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        printf("enter the key element");
        scanf("%d",&key);
        fk=fib(n+1);
        p=fib(fk);
        q=fib(p);
        r=fib(q) ;
        m=(n+1)-(p+q);
        
        if(key>a[p])
            p=p+m;
            loc=rfibsearch(a,n,p,q,r,key);
 
        if(loc==0)
            printf("key is not found");
        else
            printf("%d is found at location %d",key,loc);
        getch();
}

int fib(int m) {
    int a,b,c;
    a=0;
    b=1;
    c=a+b;
 
    while(c<m) {
        a=b;
        b=c;
        c=a+b;
    }
 
    return b;
}

int rfibsearch(int a[],int n,int p,int q,int r,int key) {
    int t;
    
    if(p<1||p>n)
        return 0;
    else if(key==a[p])
        return p;
    else if(key<a[p]) {
        if(r==0)
        return 0;
    else {
        p=p-r;
        t=q;
        q=r;
        r=t-r;
    return rfibsearch(a,n,p,q,r,key);
    } 
    }
    else {
        if(q==1)
        return 0;
    else {
        p=p+r;
        q=q-r;
        r=r-q;
    return rfibsearch(a,n,p,q,r,key);
    } 
    } 
}