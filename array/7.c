// 7) Write a C program to insert an element at desired position in an array. 

#include<stdio.h>
#include"header/array.h"

void main()
{

  int i,pos,arr[10],num;
  int ele = sizeof(arr)/sizeof(arr[0]);

  printf("Enter 10 num : ");
  scan_array(5,arr);
  
  printf("Enter pos and num : ");
  scanf("%d%d",&pos,&num);
  
  print_array(5,arr);

  for(i=4;i>=pos;i--)
	  arr[i+1]=arr[i];
  arr[pos]=num;

  print_array(6,arr);

}
