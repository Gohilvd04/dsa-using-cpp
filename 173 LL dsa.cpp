#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first=NULL;

void create(int A[], int n)
{
    int i;
    node *t,*last;
    first=new struct node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1; i<n; i++)
    {
        t=new struct node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last =t;
    }
}
void display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    int A[]= {3,5,7,10,15};

    create(A,5);
    display(first);
}