// 11) Write a program to copy the elements of one array into another array without duplicate
//       items as a first slot, and store duplicate elements as a second slot.


#include<stdio.h>
#include"header/array.h"

void main()
{
  int i,j,k,arr[13]={10,2,4,5,2,1,3,4,6,5,8,9,2};
  int s_arr[13],r_arr[13];
  int s_count=0,r_count=0;

  //printf("Enter 13 number : ");
  //scan_array(13,arr);


  print_array(13,arr);

  for(i=0;i<13;i++)
  {
     for(j=0;j<s_count;j++)
     	if(arr[i]==s_arr[j])
		break;

 	if(j == s_count)
	{
		s_arr[s_count]=arr[i];
                s_count++;
	}
	else
	{       
		for(k=0;k<r_count;k++)
			if(arr[i]==r_arr[k])
				break;
                if(k!=r_count)
	        	continue;
	
		r_arr[r_count]=arr[i];
                r_count++;
	        for(k=i+1;k<13;k++)
			if(arr[i]==arr[k])
			{
	        	r_arr[r_count]=arr[i];
                	r_count++;
			}
	
	}  
  }

 printf("first slot  : ");
 print_array(s_count,s_arr);
 printf("second slot : ");
 print_array(r_count,r_arr);

}
