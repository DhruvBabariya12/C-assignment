// 6) Write a C program to delete an element at desired position from an array.

#include<stdio.h>
#include"header/array.h"

void main()
{
 int i,j,pos,ele;
 int arr[10];
 
 ele = sizeof(arr)/sizeof(arr[0]);

 printf("Enter 10 num :");
 scan_array(10,arr);
 printf("enter pos :");
 scanf("%d",&pos);
 
 print_array(10,arr);
 

 for(i=pos;i<ele;i++)
     arr[i]=arr[i+1];

 print_array(9,arr);





}
