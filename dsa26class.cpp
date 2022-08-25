#include<iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;

void initialise(int l,int b)
{
    length=l;
    breadth=b;
}
int area()
{
    return length * breadth;
}
int perimeter()
{
    return 2*(length+breadth);
}
};
int main()
{
    rectangle r;
    int l,b;

    cout<<"Enter length & breadth:";
    cin>>l>>b;

    r.initialise(l,b);
    int a=r.area();
    int peri=r.perimeter();

    cout<<"length= "<<l<<"\nbreadth= "<<b;
    cout<<"\narea= "<<a<<"\nperimeter= "<<peri;


}