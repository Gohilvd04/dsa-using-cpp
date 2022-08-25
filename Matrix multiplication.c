#include<stdio.h>

int main()
{
    
    int i,j,k;
    
    int a[3][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[3][3];
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    int c[3][3]= {0,0};


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                c[i][j]=c[i][j]+a[i][j]*b[k][j];
            }
        }
    }
    printf("a*b:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%-3d",c[i][j]);
        }
        printf("\n");
    }


}