/*
7. Write a program to rotate the bits. Input  the no.of  rotations, at runtime.
    Ex : binary  :  10000000000000000000000000001011
            rotations : suppose 3 times right,  then
    	result    :  01110000000000000000000000000001

           binary  :  10000000000000000000000000001011
           rotations : suppose 4 times left,  then
	result :   00000000000000000000000010111000
*/

#include<stdio.h>
void main()
{
    int num=-15;
    int rotation=4,i,m,j,k;
    for(i=31;i>=0;i--)
        printf("%d",num>>i&1);
    printf("\n");

    for(i=0;i<rotation;i++)
    {
        m = num&1;
        num=num>>1;
        k = num>>31&1;

        if(k != m)
            num = num^1<<31;
        
    }
    for(i=31;i>=0;i--)
        printf("%d",num>>i&1);
    printf("\n");
}