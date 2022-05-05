/* 22) Write a program for Decryption of a given Encrypted 
       string line with respect to given key number. */

#include<stdio.h>
#include"my_string.h"

void main()
{
    char s[]="Expcet Porblmes adn eat thef mor rbeafkast";
    int key = 4;
    int i,j,k;
    int len = str_len(s);
    int first,second,count=0;
    char tmp;
    printf("%s \n",s);

    for(i=0;i<len;i++)
    {
        if(s[i] != ' ')
            count++;

        if(count != key)
            continue;    
        
        count = 0;    
        while(s[i]== ' ')
            i++;
        first = i;

        while (s[i+1]== ' ')
            i++;
        
        second = i+1;

        tmp = s[first];
        s[first]= s[second];
        s[second]=tmp;       
    }
    printf("%s \n",s);

}