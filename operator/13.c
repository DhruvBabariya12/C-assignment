/*
13. Write a program to delete no.of  bits from perticular position in a given number.
       Input the no.of bits, at runtime.
        Ex:  Suppose  num  =  100;
		         It's Binaray is     00000000000000000000000001100100
*/

#include<stdio.h>
void main()
{ 
    int num=0xAA,i=0;
    for(i=31;i>=0;i--)
        printf("%d",num>>i&1);
    printf("\n");
    
    num=num;
    
    for(i=31;i>=0;i--)
        printf("%d",num>>i&1);
    printf("\n");

}