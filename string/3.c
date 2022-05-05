// 3) Write a program to find the no. of times the character is found in a given string.

#include<stdio.h>

void main()
{
 char s[100],ch;
 int count,i;

 printf("Enter String : \n");
 scanf("%[^\n]",s);
 printf("Enter charactor :\n ");
 scanf(" %c",&ch);

 for(i=0;s[i];i++)
   if(ch==s[i])
	count++;

 printf("%c ... %d times\n",ch,count);


}
