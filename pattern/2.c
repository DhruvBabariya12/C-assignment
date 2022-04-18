#include<stdio.h>

int main()
{
    int i,j,k,row=11;

    for(i=1;i<=13;i++)
    {   
        if(i<=7)
        {
            for(j=1;j<=13;j++)
                if(7-i+1>j)
                    printf(" ");

            for (k=1;k<=13;k++)
                if(i*2-1>=k)
                    printf("*");
        }
        else
        {
            for(j=1;j<=13;j++)
                if(i-6>j)
                    printf(" ");

            for (k=1;k<=13;k++)
                if((14-i)*2-1>=k)
                    printf("*");
        }

    printf("\n");
    }
}