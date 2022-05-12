/*  13) Write a recursive function to revese the string. (Note : not just reverse printing
        charecter by charecter)
*/

#include<stdio.h>

void str_rev(char *s)
{
    static int l_loc=0;
    static int s_loc=0;
    char tmp;
    if(s[l_loc])
    {
        l_loc++;
        str_rev(s);
        if(l_loc>s_loc)
        {
            tmp =  s[s_loc];
            s[s_loc] = s[l_loc];
            s[l_loc] = tmp;
            l_loc--;
            s_loc++;
        }
        else
        {
            l_loc=0;
            s_loc=0;
        }
    }
    else
        l_loc--;
    
}

void main()
{
    char s[100]="hello kem 6o";
    
    printf("%s \n",s);
    str_rev(s);

}