//  13) Write a C program to implement the stack using arrays.

#include<stdio.h>

int main()
{
 int count=0,i,j,num=0;
 int stack[100];
 int state,data;

while(1)
{

 printf("1)pop  2)push 3)print 4)exit :  ");
 scanf("%d",&state);

 switch(state)
 {
   case 2: 
         printf("Enter Data : ");
	 scanf("%d",&data);
         stack[count] = data; 
	 count++;
         if(count>=100)
	 	count=100;          
	 break;

   case 1:
	
         count--;
         printf(" %d poped \n",stack[count]); 
	 if(count<=0)
	 	count=0;          
	 break;

   case 3:
        for(i=0;i<count;i++)
		printf("%d ",stack[i]);
	printf("\n");
	break;

   case 4:
 	return 1;


}
}
}



