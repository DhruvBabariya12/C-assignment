// rev ele in array


#include<stdio.h>
#include"header/array.h"

void main()
{
	int i,j,ele,arr[10];
	int tmp;
	ele = sizeof(arr)/sizeof(arr[0]);
	printf("Enter 10 num : ");
	scan_array(10,arr);
	print_array(10,arr);

	for(i=0,j=ele-1;i<j;i++,j--)
	{

		tmp = arr[i];
		arr[i]= arr[j];
		arr[j]=tmp;

	}

	print_array(10,arr);

}
