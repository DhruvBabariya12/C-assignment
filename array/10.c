// 10) Write a program to print the non repeted numbers of  a given array.

#include<stdio.h>
#include"header/array.h"

void main()
{
	int i,j,arr[10];
	int count;
	printf("Enter 10 number :");
	scan_array(10,arr);
	print_array(10,arr);

	for(i=0;i<10;i++)
	{
		for(j=0,count=0;j<10;j++)
			if(arr[i]==arr[j])
				count++;
		if(count==1)
			printf("%d ",arr[i]);

	}
	printf("\n");
}
