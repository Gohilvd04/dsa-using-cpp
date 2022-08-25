#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first=NULL,*second=NULL,*third=NULL;

void create1(int A[], int n)
{
    int i;
    node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1; i<n; i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last =t;
    }
}

void create2(int B[], int n)
{
    struct node *t,*last;
    second=new node;
    second->data=B[0];
    second->next=NULL;
    last=second;

    for(int i=1; i<n; i++)
    {
        t=new node;
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

node * Search(node *p,int key)
{

    while(p)
    {
        if(key==p->data)
            return p;
        p=p->next;
    }
    return NULL;
}

node * RSearch(node *p,int key)
{
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return RSearch(p->next,key);

}

node * ImprovedSearch(node *p, int key)
{
    node *q;

    while(p)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

void Insert(node *p,int index,int x)
{
    node *t;

    if(index<0 || index>count(p))
    {
        return;
    }
    t=new node;
    t->data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0; i<index-1; i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }

}

void InsertLast(node *p, int x)
{
    node *last,*t;

    t=new node;
    t->data=x;
    t->next=NULL;

    if(first==NULL)
    {
        first=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}

void SortedInsert(node *p, int x)
{
    node *t,*q=NULL;
    t=new node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
    }
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }
}

int Delete(node *p,int index)
{
    node *q=NULL;
    int x=-1;

    if(index<1 || index>count(p))
        return -1;
    if(index==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }
    else
    {
        for(int i=0; i<index-1; i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
}
void RemoveDuplicate(node *p)
{
    node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}
//Reverse by Changing data of linked list
void Reverse1(struct node *p)
{
    int *A,i=0;
    node *q=p;

    A=(int*)malloc(sizeof(int)*count(p));

    while(q!=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
}

//Reverse Linked list by changing links
void Reverse2(node *p)
{
    node *q=NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
//Reverse LL by recursion
void Reverse3(node *q,node *p)
{
    if(p)
    {
        Reverse3(p,p->next);
        p->next=q;
    }
    else
    {
        first=q;
    }
}
void concate(node *p,node *q)
{
    third=p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}

void merge(node *p, node *q)
{
    node *last;
    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else
    {
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)
    {
        last->next=p;
    }
    if(q)
    {
        last->next=q;
    }
}
int main()
{
    int A[]= {3,5,5,7,10,10,15};
    int B[]= {2,5,9,11,23};

    create1(A,7);
    create2(B,5);

    RemoveDuplicate(first);
    display(first);

    return 0;
}