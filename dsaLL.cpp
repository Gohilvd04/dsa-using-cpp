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







void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void rdisplay(node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        rdisplay(p->next);
    }
}

int count(node *p)
{
    int c=0;
    while(p)
    {
        c++;
        p=p->next;
    }
    return c;
}

int Rcount(node *p)
{
    if(p==0)
        return 0;
    else
        return Rcount(p->next)+1;
}

int Add(node *p)
{
    int sum=0;

    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
int RAdd(node *p)
{
    if(!p)
        return 0;
    else
        return RAdd(p->next)+p->data;
}
int main()
{
    int A[]= {3,5,7,10,15};

    create(A,5);    
    display(first);
    rdisplay(first);
    cout<<count(first)<<endl;
    cout<<Rcount(first)<<endl;
    cout<<Add(first)<<endl;
    cout<<RAdd(first)<<endl;

    return 0;
}