/* 10) Write a recursive function to find the largest element in a given Unsorted array. */

#include<stdio.h>

int largest(int *p,int n)
{
    int largest1;
    if(n)
    {
        largest1 = largest(p,n-1);
        if(p[n-1] > largest1)
            return p[n-1];
        return largest1;
    }
    else
        return p[n];
}

void main()
{
    int arr[]={-1,-1,-1,-1,-2};
    printf("%d",largest(arr,5));
    printf("\n");
}