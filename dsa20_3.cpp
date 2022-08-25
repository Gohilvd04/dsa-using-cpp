#include<iostream>
using namespace std;
struct test
{
    int A[5];
    int n;
};

void fun(struct test t1)
{
    t1.A[0]=5;
    t1.A[1]=10;
    cout<<"formal parameters:"<<t1.A[0]<<","<<t1.A[1]<<endl;

}

int main()
{
    struct test a= {{2,4,6,8,10},5};

    fun(a);
    cout<<"actual parameters:";
    cout<<a.A[0]<<","<<a.A[1];

    return 0;
}