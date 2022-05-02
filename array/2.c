// 2) Write a C program to input 10 numbers through the keyboard into an array and find the 
//     biggest and smallest number in an Unsorted array without using any Sorting Technique.

#include<stdio.h>
#include"header/array.h"

void main()
{

 int arr[10];

 printf("Enter 10 num :  ");
 scan_array(10,arr);
 //print_array(10,arr);
 printf("big = %d small = %d \n",largest_num(10,arr),smallest_num(10,arr));
 


}
