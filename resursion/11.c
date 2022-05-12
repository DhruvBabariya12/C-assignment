/* 11) Write a recursive function to reverse the bits of a given number. */

#include<stdio.h>

void rev_num(int *p)
{
    static int i=31,j=0;
    if(i>j)
    {
        if((*p>>i&1) != (*p>>j&1))
        {
            *p=*p^1<<i;
            *p=*p^1<<j;
        }
        i--;
        j++;
        rev_num(p);
    }
}

void main()
{
    int num,i;
    printf("Enter num : ");
    scanf("%d",&num);

    for(i=31;i>=0;i--)
        printf("%d ",num>>i&1);
    printf("\n");

    rev_num(&num);

    for(i=31;i>=0;i--)
        printf("%d ",num>>i&1);
    printf("\n");
}