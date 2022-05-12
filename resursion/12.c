/*  12) Write a recursive function to revese the elements of a given array. */

#include<stdio.h>

void rev_arr(int *p,int n)
{
    int tmp;

    if(p+n-1>p)
    {
        tmp=p[0];
        p[0]=p[n-1];
        p[n-1]=tmp;
        rev_arr(p+1,n-2);
    }
}

void main()
{
    int arr[5]={1,4,3,4,8},i;

    rev_arr(arr,5);

    for(i=0;i<5;i++)
        printf("%d ",arr[i]);
    printf("\n");
}