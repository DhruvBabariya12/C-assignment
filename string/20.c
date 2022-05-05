/* 20) Write a program to read two strings through the keyboard like the following example 
    and replace any word of the second string with    the first string.
*/

#include"my_string.h"

void main()
{
  char s[]="Today is Sunday";
  char sb[]="Tom";
  char d[]="Today";
  char *q,*p,*r;
  int count=0;
  q=s;
  int i,space;
  
 
    if(p=str_str(q,d))
    {
        if(str_len(sb) == str_len(d))
        {
            for(i=0;sb[i];i++)
                p[i]=sb[i];
        }
        else if(str_len(sb) > str_len(d))
        {
            space = str_len(sb) > str_len(d);
            for(i=0;s[i];i++);
            for(;&s[i]>p;i--)
            {
                s[i+space+1]=s[i];
            }
            for(i=0;sb[i];i++)
                p[i]=sb[i];
        }
        else
        {
            space = str_len(d) > str_len(sb);

            str_cpy(p,p+space+1);
            for(i=0;sb[i];i++)
                p[i]=sb[i];

        }
        
    }
    printf("%s \n",s);




}