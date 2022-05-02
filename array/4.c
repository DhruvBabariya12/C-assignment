// 4)  Write a C program to findout second largest and second smallest elements of an
//      unsorted array without using any Sorting Technique.

#include<stdio.h>
#include"header/array.h"

void main()
{
  int i,arr[10];
  int largest;
  int second_largest;
  
  printf("Enter 10 Number :");
  scan_array(10,arr);
  
  if(arr[0]>arr[1])
	  largest = arr[0],second_largest = arr[1];
  else
	  largest = arr[1],second_largest = arr[0];
 
 
 
  for(i=2;i<10;i++)
  {
    
    if(largest < arr[i])
    {
       second_largest = largest;
       largest = arr[i];
    }
    else if(second_largest < arr[i] && largest != arr[i])
	    second_largest = arr[i]; 
  }


   printf("largest = %d second_largest = %d \n",largest,second_largest);
   

}	
