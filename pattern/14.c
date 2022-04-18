#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=13;j++)
        {
            if(7-i+1>=j)
                printf("%c ",j+64);
            else if(i+6<=j)
                printf("%c ",14-j+64);
            else
                printf("  ");
        }
        printf("\n");
    }
}