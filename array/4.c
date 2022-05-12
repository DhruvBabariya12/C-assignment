// 4)  Write a C program to findout second largest and second smallest elements of an
//      unsorted array without using any Sorting Technique.

#include<stdio.h>
#include"header/array.h"

void main()
{
 int second_larges=0;
 int largest=0;
 int second_smallest=0;
 int smallest=0;
 int arr[10];
 int i;

printf("Enter 10 num : ");
scan_array(10,arr);

if(arr[0] > arr[1])
{
   largest=arr[0];
   second_larges = arr[1];
}
else if (arr[0] < arr[1])
{
   largest=arr[1];
   second_larges = arr[0];
}
else
{
   largest=arr[1];
   second_larges=0;
}



if(arr[0] > arr[1])
{
   second_smallest=arr[0];
   smallest = arr[1];
}
else if (arr[0] < arr[1])
{
   second_smallest=arr[1];
   smallest = arr[0];
}
else
{
   smallest=arr[1];
   second_smallest=arr[1];
}


for(i=2;i<10;i++)
{
  
   if(largest < arr[i])
   {
      second_larges = largest;
      largest = arr[i];
   }
   else if(second_larges < arr[i] && arr[i] != largest) 
      second_larges = arr[i];

}

for(i=2;i<10;i++)
{
  
   if(smallest > arr[i])
   {
      second_smallest = smallest;
      smallest = arr[i];
   }
   else if(second_smallest > arr[i] && arr[i] != smallest) 
      second_smallest = arr[i];

}

printf("second_larges = %d second_smallest = %d \n",second_larges,second_smallest);


}	
