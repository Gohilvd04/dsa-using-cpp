#include<iostream>
using namespace std;
int x;
int fun(int n)
{

    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main()
{
    int a;
    cin>>a;

    cout<<fun(a);
}