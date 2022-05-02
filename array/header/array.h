#ifndef ARRAY_H
#define ARRAY_H

#include<stdio.h>

void scan_array(int num,int *a)
{
	int i;
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
}

void print_array(int num,int *a)
{
	int i;
	for(i=0;i<num;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int largest_num(int num,int *a)
{
	int i,larg_num = a[0];

	for(i=1;i<num;i++)
	{ 
		if(a[i]>larg_num)
			larg_num = a[i];

	}
	return larg_num;
}

int smallest_num(int num,int *a)
{
	int i,small_num=a[0];

	for(i=1;i<num;i++)
	{
		if(a[i]<small_num)
			small_num = a[i];
	}
        return small_num;	
}





#endif
