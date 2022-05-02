// 8) Write a C program which deletes the duplicate elements of an array.

#include<stdio.h>
#include"header/array.h"

void main()
{
	int i,j,count=0;
	char c;
	char ch[10];

	printf("Enter 10 char : ");
	for(i=0;i<10;i++)
		scanf("%c",&ch[i]);

	printf("Enter charactor to be delete : ");
	scanf(" %c",&c);

	for(i=0;i<10;i++)
	{
		if(c==ch[i])
		{
			count++;
			for(j=i;j<9;j++)
				ch[j]=ch[j+1];
		}
	}

	for(i=0;i<10-count;i++)
		printf("%c",ch[i]);


}
