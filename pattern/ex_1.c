/*
Floyd's Triangle:

1
2 3
4 5 6
7 8 9 10

*/
#include<stdio.h>

void main()
{
    int i,j,k,l;
    int row = 4;
    for(i=1,k=1;i<=row;i++)
    {  
        for(j=1;j<=i;j++,k++)
            printf("%d ",k);
        printf("\n");
    }

}