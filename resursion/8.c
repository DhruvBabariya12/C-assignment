/* 8) Write a recursive function to print the palindrome numbers in a given numbers. */

#include<stdio.h>

int check_palindrome(int n)
{
    static int sum=0;
    int tmp=n;
    if(tmp)
    {
        sum = sum*10+tmp%10;
        check_palindrome(tmp/10);
    }
    if (sum == n)
        return 1;
    return 0;
}

void main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);

    if(check_palindrome(num))
        printf("yes\n");
    else
        printf("no\n");

    if(check_palindrome(num))
        printf("yes\n");
    else
        printf("no\n");
}