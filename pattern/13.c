#include<stdio.h>

void main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i>=j)
                printf("%d ",j);
            else if(10-i<=j)
                printf("%d ",10-j);
            else
                printf("  ");
        }
        printf("\n");
    }
}