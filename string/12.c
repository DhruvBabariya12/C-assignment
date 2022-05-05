/* 12) Write a program to print the count of duplicate characters in a given string. */

#include"my_string.h"

void main()
{

char s[]="hrithik roshan";
int i,j,count;

for(i=0;s[i];i++)
{

    for(j=0,count=0;s[j];j++)
    {
        if(i>j && s[i]==s[j])
            break;
        else
            {
                if(s[i]==s[j])
                count++;
            }
    }
    if(count > 1)
        printf("%c --- %d\n",s[i],count);
        
}




}