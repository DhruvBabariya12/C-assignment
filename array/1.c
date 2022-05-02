// 1) Write a C program to input 10 numbers through the keyboard into an array and
//  display the results of addition of even numbers and product of odd numbers.

#include<stdio.h>

void main()
{
  int a[10];
  int i,sum=0;
  long int product=1;
  int odd_count = 0;

  printf("Enter 10 digit :");

  for(i=0;i<10;i++)
  	scanf("%d",&a[i]);


  for(i=0;i<10;i++)
  {
    if(a[i]%2==0)
        sum+=a[i];
    else
    {
        product*=a[i];
        odd_count++;
    }
  }
  if(!odd_count)
	  product=0;

  printf("Sum of even Number    = %d \n",sum);
  printf("product of odd Number = %ld \n",product);
}
