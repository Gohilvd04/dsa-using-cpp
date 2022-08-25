#include<stdio.h>

int main()
{
    int A[5]= {40,50,10,20,30};
    int temp=0, i, j;

    for(i=0; i<5-1; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("sorted array :\n");

    for(i=0; i<5; i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}