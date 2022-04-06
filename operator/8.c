// Convert the characters Upper to Lower and Lower to Upper using bitwise operators 

#include<stdio.h>

void main()
{
  char ch;
  printf("enter ehar\n");
  scanf("%c",&ch);
  
  ch>>5&1?ch = ch&~(1<<5):(ch = ch|1<<5);
  printf("ch = %c\n",ch);

}