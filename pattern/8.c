#include<stdio.h>

void main()
{
    int i,j,k,l;
    int row = 10;
    for(i=1;i<row;i++)
    {  l=i;
        for(j=0,k=row-1;j<i;l=l+k,k--,j++)
            {
                printf("%d ",l);
            }
    printf("\n");
}

}