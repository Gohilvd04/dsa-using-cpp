#include<iostream>
using namespace std; 

struct rectangle
{
	int l;
	int b;
};

int main()
{
	struct rectangle r1= {10,5};
	cout<<"Lenth = "<<r1.l<<endl;
	cout<<"Breadth = "<<r1.b<<endl;
	cout<<"area of rectangle is "<<r1.l * r1.b;
	
}