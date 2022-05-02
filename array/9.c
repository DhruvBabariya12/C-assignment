// 9) Write a C program to find the duplicate elements of a given array and find the count of
//     duplicated elements.
#include<stdio.h>
#include"header/array.h"

void main()
{
	int i,j,arr[10];
	int d_count=0,c_count=0;
	printf("Enter 10 digit number :");
	scan_array(10,arr);

	print_array(10,arr);

	for(i=0;i<10;i++)
	{
		for(j=0,d_count=0;j<i;j++)
			if(arr[i]==arr[j])
				d_count++;

		if(d_count)
			continue;

		for(j=i,c_count=0;j<10;j++)
		{
			if(arr[i]==arr[j])
				c_count++;

		}
		printf("%d -- %d times\n",arr[i],c_count);



	}
}
