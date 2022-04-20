#include<stdio.h>

void main()
{
    int i,j,row=7;
    printf("Enter number of row\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row*2-1;j++)
        {
            if(i>=j)
                printf("%d ",j);
            else if(row*2-i<=j)
                printf("%d ",row*2-j);
            else
                printf("  ");
        }
        printf("\n");
    }
}