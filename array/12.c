// 2) Write a C program to evaluate the following series. The series contains sum of
//       square of numbers from 1 to 'n'. Strore result of each term in an array. Calculate 
//       value of  ' S '  using array.



#include<stdio.h>

void main()
{
 int num,i,sum=0;

 printf("Enter number :");
 scanf("%d",&num);

 int arr[num];
 arr[0]= 1;
 for(i=1;i<num;i++)
   arr[i]= (i+1)*2;

 for(i=0;i<num;i++)
    sum += arr[i];

 printf("sum = %d\n",sum);

}
