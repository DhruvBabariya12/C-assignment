/* 11) Write a program to delete the duplicate characters in a given string.*/
#include"my_string.h"

void main()
{
char s[]="vecteeovvorr";

int i,j,k;

for(i=0;s[i];i++)
{
  for(j=i+1;s[j];j++)
  {
    if(s[i]==s[j])
    {
        for(k=j;s[k];k++)
            s[k]=s[k+1];
        j--;
    }
  }
}
printf("%s \n",s);


}