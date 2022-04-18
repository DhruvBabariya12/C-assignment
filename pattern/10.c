#include<stdio.h>

void main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
            if(i*2<=j)
                printf(" ");
        
        for(j=1;j<=9;j++)
            if(i*2-1>=j)
                printf("%d ",j);
        
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=9;j++)
            if(i*2>=j)
                printf(" ");
        
        for(j=1;j<=9;j++)
            if((5-i)*2-1>=j)
                printf("%d ",j);
        
        printf("\n");
    }
}