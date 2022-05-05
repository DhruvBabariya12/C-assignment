/* 16) Write a program to accept two strings from user into two character array and 
        copy one by one character into another destination array. 
*/

#include"my_string.h"
#include<stdlib.h>

void main()
{
  char s1[100]="AAAAAAaaaa";
  char s2[100]="1234512312312";
  // char *d;
  // int i,j,k;
  // int len = str_len(s1) + str_len(s2)+1;
  // d = malloc(sizeof(char)*len);
  // for(i=0,j=0,k=0;s2[k] || s1[j];)
  // {
  //   if(s1[j])  
  //     d[i++]=s1[j++];
  
  //   if(s2[k])
  //     d[i++]=s2[k++]; 
  // }

  //  printf("%s \n",d);

  char *big,*sml;
  int i,j,big_len;

  str_len(s1)-str_len(s2) >= 0 ? (big=s1,sml=s2):(big=s2,sml=s1);
  big_len = str_len(big)+1;

  for(i=0;sml[i];i++)
    {
      
      for(j=big_len;j>=i*2+1;j--)
          big[j+1]=big[j];
      big_len++;
      big[i*2+1]=sml[i];
    }
    printf("%s \n",big);

}