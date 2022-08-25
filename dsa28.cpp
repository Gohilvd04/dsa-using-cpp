#include<iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;
public:

    rectangle()
    {
        length=0;
        breadth=0;
    }
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    int changelength(int l)
    {
        length=l;
    }
    int changebreadth(int b)
    {
        breadth=b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    ~rectangle()
    {
     
    }
};

int main()
{
    rectangle r(10,5);

    cout<<r.area()<<endl;

    cout<<r.perimeter()<<endl;

    r.changelength(16);

    r.changebreadth(4);

    cout<<r.getlength()<<endl;

    cout<<r.getbreadth()<<endl;

    return 0;

}