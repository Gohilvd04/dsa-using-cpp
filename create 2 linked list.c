#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

} *first=NULL,*second=NULL,*third=NULL;

void create1(int A[],int n)
{

    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1; i<n; i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
void create2(int B[],int n)
{

    struct node *t,*last;
    second=(struct node *)malloc(sizeof(struct node));
    second->data=B[0];
    second->next=NULL;
    last=second;

    for(int i=1; i<n; i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }

}
int main()
{
    int A[]= {10,4,3,7,5};
    int B[]= {5,6,8,0,3};
    create1(A,5);
    display(first);
    printf("\n");
    create2(B,5);
    display(second);

}