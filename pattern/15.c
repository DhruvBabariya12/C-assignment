#include<stdio.h>

void main()
{
    int i,j,k;

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(7-i<=j)
                // if(5)
                    printf("%d ",i);
                else
                    printf(" ");
        }
        printf("\n");
    }
}