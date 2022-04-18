#include<stdio.h>

void main()
{
    int i,j,k;

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(i>=j)
                if(i%2==0)
                    printf("%d ",j*2);
                else
                    printf("%d ",j*2-1);
        }
        printf("\n");
    }
}