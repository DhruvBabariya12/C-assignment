/* 17) Write a program to find the no. of times substring is found in a given string. */

#include<stdio.h>
#include"my_string.h"

void main()
{
    char s[]= "abcccc abc aaa bbb abc cccccc";
    char sb[]= "ccc";
    char *p;
    p = s;

    int count=0;

    while(p = str_str(p,sb))
    {
       count++;
       p = p + str_len(sb);
    }
    printf("%d \n",count);

}