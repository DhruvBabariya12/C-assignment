#ifndef MYSTRING_h
#define MYSTRING_h
#include<stdio.h>

/* find string lenght */
int str_len (char *s)
{
  int i=0;

  for(i=0;s[i];i++);
  return i-1;
}

/* copy string */
char *str_cpy(char *p,const char *s)
{ 
    int i;
    for(i=0;s[i];i++)
      p[i]=s[i];
    p[i]=s[i];
    return p;
}

/* marge s2 to s1 */
char *str_cat(char *s,const char *d)
{
    int i,j;

    for(i=0;s[i];i++);

    for(j=0;d[j];i++,j++) 
         s[i]=d[j];
    s[i]=d[j];
    return s;
}

/* find charactor */
char *str_chr(char *s,char ch)
{
  int i;
  
  for(i=0;s[i];i++)
      if(s[i]==ch)
          return s+i;
  return 0;

}

/* compare string */
int str_cmp(char *str1,char *str2)
{
  int i;
  for(i=0;str1[i];i++)
      if(str1[i]!=str2[i])
          break;

  if(str1[i]==str2[i])
    return 0;
  else if (str1[i]<str2[i])
    return -1;
  else
    return 1;

}

/* finding sub string */
char *str_str(char *s,char *sb)
{
  int i,j,k;
  for(i=0;s[i];i++)
  {  
      if(sb[0]==s[i])
      {
          for(j=i,k=0;sb[k];j++,k++)
          {
            if(sb[k]!=s[j])
              break;
          }
          if(sb[k]==0)
            return s+i;
      }
  }
  return 0;
}

/* rev string */
void str_rev(char *p)
{
   char *q = p;
   char tmp;

   while(*q)
      q++;
    q--;
    
    while(p<q)
    {
      tmp = *p;
      *p = *q;
      *q = tmp;

      p++;
      q--;
    }
}

/* rev between two location */
void str_nrev(char *p,char *q)
{
  char tmp;
   while(p<q)
   {
    tmp = *p;
    *p = *q;
    *q = tmp;
    p++;
    q--;
   }

}




#endif 
