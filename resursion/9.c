/*
9)  A number is perfect if the sum of all its positive proper divisors is equal to the
           number. For example 28 is a perfect number since 28 = 1+2+4+14. Write a 
           recursive function that finds whether a number is perfect or not.
*/

#include<stdio.h>

int num;

int perfect(int n)
{
    if(n>1)
    {
        if(num%(n-1)==0)
            return n-1 + perfect(n-1);     
        return perfect(n-1);
    }
    else
        return 0;
}

void main()
{
    printf("Enter number : ");
    scanf("%d",&num);

    if(perfect(num)==num)
        printf("perfect \n");
    else
        printf("not perfect\n");
}