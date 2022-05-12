// 6) Write a recursive function that displays a positive integer in words. For ex: if the
//          integer is 3412 then it is displayed as three four one two.

#include <stdio.h>

void num_to_word(int);
char digit[10][10] = {{"zero"}, {"one"}, {"two"}, {"three"}, {"four"}, {"five"}, {"six"}, {"seven"}, {"eight"}, {"nine"}};

void main()
{
    int num;
    printf("Eneter number : ");
    scanf("%d", &num);

    num_to_word(num);
    printf("\n");
}

void num_to_word(int n)
{
    if (n)
    {
        num_to_word(n / 10);
        printf("%s ", digit[n % 10]);
    }
}