// 3) Write a C program to input 10 numbers through the keyboard and find the number
//     of prime numbers count, store  them into a seperate array and display it.

#include<stdio.h>
#include"header/basic.h"
#include"header/array.h"

void main()
{

int arr[10],prime_arr[10];
int i,prime_count=0;

printf("Enter 10 number : ");
scan_array(10,arr);

for(i=0;i<10;i++)
{
  if(check_prime(arr[i]))
  {
    prime_arr[prime_count]=arr[i];
    prime_count++;
  }
}

print_array(prime_count,prime_arr);

}
