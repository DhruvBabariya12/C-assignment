/* 15) Write a program to sort a given string in ascending order. */

#include"my_string.h"

void main()
{
char s[]="decag";
char tmp;
int i,j;

for(i=0;s[i+1];i++)
{
    for(j=0;s[j+1];j++)
    {
        if(s[j]>s[j+1])
        {
            tmp  = s[j];
            s[j]=s[j+1];
            s[j+1]=tmp;
        }   

    }
}
printf("%s \n",s);


}