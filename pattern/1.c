#include<stdio.h>

int main()
{
    int i,j,row=14,change_state;
    printf("Enter number of row...\n");
    scanf("%d",&row);
    if(row<0)
       return 1;

    if(row%2==0)
        change_state=row/2;
    else
        change_state=row/2+1;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=change_state;j++)
        {
            if(i<=change_state)
            {
                if((change_state-i)<j)
                    printf("* ");
                else
                    printf(" ");
            }
            else
                if(row-i <= change_state-j-1)
                    printf(" ");
                else
                    printf("* ");

        }
        printf("\n");
    }
}