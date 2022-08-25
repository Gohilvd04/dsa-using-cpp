#include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;

};
struct rectangle *fun()
{
    rectangle *p;
    p=new rectangle;

    p->length=45;
    p->breadth=65;

    return p;

}
int main()
{
    rectangle *ptr;
    
    ptr=fun();
    
    cout<<"length "<<ptr->length<<endl<<"breadth "<<ptr->breadth;
    return 0;
}