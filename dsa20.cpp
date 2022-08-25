#include<iostream>
using namespace std;
struct rectangle
{
int length;
int breadth;

};
void fun(rectangle r1)
{
cout<<"Length "<<r1.length<<endl;
cout<<"Breadth "<<r1.breadth<<endl;
}
int main()
{
    rectangle r={10,5};
    fun(r);
    return 0;
}