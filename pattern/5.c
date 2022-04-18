/*    
    1 
	2*2 
	3*3*3 
	4*4*4*4 
	5*5*5*5*5 
	4*4*4*4 
	3*3*3 
	2*2 
	1

*/

#include<stdio.h>
int main()
{
    int i,j,row=9;
     
    for (i=1;i<=row;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i<=5)
            {  
                if(i*2-1>=j)
                    if (j%2 == 0)
                        printf("*");
                    else
                        printf("%d",i);
            }
            else
                if ((9-i)*2+1 >= j)
                    if(j%2==0)
                        printf("*");
                    else
                        printf("%d",10-i);
        }
        printf("\n");
    }
}