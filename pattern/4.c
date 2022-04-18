#include<stdio.h>

int main()
{
    int i,j,k,row=11;

    for(i=1;i<=11;i++)
    {   
        if(i<=6)
        {
            for(j=1;j<=11;j++)
                if(i>j)
                    printf(" ");

            for (k=1;k<=11;k++)
                if(i*2-1<k+1)
                    printf("*");
        }
        else
        {
            for(j=1;j<=11;j++)
                if(i<j)
                    printf(" ");

            for (k=1;k<=13;k++)
                if((11-i)*2+1<k-1)
                    printf("*");
        }

    printf("\n");
    }
}