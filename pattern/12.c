#include<stdio.h>

void main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(i>=j || 10-i+1 <=j)
                printf("%d ",i);
            else
                printf("  ");

        }
    printf("\n");
    }
}