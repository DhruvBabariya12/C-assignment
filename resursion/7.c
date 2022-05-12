/* Write a recursive function to print first 100 prime numbers. */

#include<stdio.h>

int my_num=2;

int check_prime(int n)
{  
    if(n<=1)
        return 0;
    if(n > 2)
    {
        if(my_num%(n-1)!=0)
            return 1 + check_prime(n-1);
        return 0;
    }
    else
        return 2;
}

void prime_num(int n)
{
    if(n)
    {
        if(my_num==check_prime(my_num))
        {
            printf("%d ",my_num);
            n--;
        }
        my_num++;
        prime_num(n);
    }
}

void main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    prime_num(num);
    printf("\n");

}