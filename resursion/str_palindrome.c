#include <stdio.h>

int palindrome(char *p)
{
    static int l;
    static int f;

    if (p[l])
    {
        l++;
        if (f < l)
        {
            if (palindrome(p))
            {
                if (p[l--] == p[f++])
                    return 1;
                l=0;
                f=0;
                return 0;
            }
            return 0;
        }
        else
            return 1;
    }
    else
    {
        l--;
        return 1;
    }
}

void main()
{
    char s[] = "a";

    printf("%d \n", palindrome(s));
    printf("%d \n", palindrome(s));
}