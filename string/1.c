//1) Write a program to find string length using pointer.

#include<stdio.h>

void main()
{

 int i,count;
 char s[]="Hello World";
 char *p=s;

 for(i=0;*p;i++,p++);

 printf("string '%s' length = %d\n",s,i);





}
