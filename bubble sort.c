#include<stdio.h>

int main()
{
    int A[5]= {30,50,20,10,40};

    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(A[i]>A[j])
            {
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        printf("%d ",A[i]);
    }


}