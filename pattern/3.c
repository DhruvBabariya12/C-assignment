/*       *  *  *  *  *  * 
 	      *  *  *  *  * 
            *  *  *  * 
             *  *  * 
               * * 
                * 
   		  	   * * 
  	         *  *  * 
  	        *  *  *  * 
 	       *  *  *  *  * 
 	     *  *  *  *  *  * 
*/

#include<stdio.h>
int main()
{
    int i,j,row=21,dir;
    
    printf("Enter total number of row\n");
    scanf("%d",&row);
    if(row<0)
        return 1;

    if(row%2!=0)
        dir = row/2 + 1;   
    else
        dir = row/2;

   for(i=1;i<=row;i++)
    {
       for(j=1;j<=dir;j++)
       {    
            if(i<=dir)
            {
                if(i<=j)
                    printf("* ");
                else   
                    printf(" ");      
            }
            else
                if(row-i>=j)
                    printf(" ");
                else
                    printf("* ");    
       }
       printf("\n");
    }
}