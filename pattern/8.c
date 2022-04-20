#include<stdio.h>

void main()
{
    int i,j,k,l;
    for(i=1;i<6;i++)
    {  l=i;
        for(j=0,k=4;j<i;l=l+k,k--,j++)
            {
                printf("%d ",l);
            }
    printf("\n");
}
}