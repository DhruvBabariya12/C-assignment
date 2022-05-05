/*  21) Write a program to check given strings are anagram or not. */

#include<stdio.h>
#include"my_string.h"

int main()
{
char s1[]="study";
char s2[]="dusl%@ty123";

int i,j,k,count=0,count1=0;

for(i=0;s1[i];i++)
{
    if(!(s1[i] > 64 && s1[i] < 91 || s1[i] > 96 && s1[i] < 123))
        {
            for(j=i;s1[j];j++)
                s1[j]=s1[j+1];
            i--;
        }
}

for(i=0;s2[i];i++)
{
    if(!(s2[i] > 64 && s2[i] < 91 || s2[i] > 96 && s2[i] < 123))
        {
            for(j=i;s2[j];j++)
                s2[j]=s2[j+1];
            i--;
        }
}

if(str_len(s1)!=str_len(s2))
   {
    printf("not anagram\n");
    return 0;
   }

for(i=0;s1[i];i++)
{
    for(k=0;k<i;k++)
        if(s1[i]==s1[k])
            continue;

    for(k=0,count=0;s2[k];k++)
        if(s1[i]==s1[k])
            count++;

    for(j=0,count1=0;s2[j];j++)
    {
        if(s1[i]==s2[j])
            count1++;
    }

    if(count != count1)
        break;
}

if(s1[i]==0)
    printf("anagram\n");
else
    printf("not anagram\n");

}