/*
4 4 4 4 4 4 4  
4 3 3 3 3 3 4   
4 3 2 2 2 3 4   
4 3 2 1 2 3 4   
4 3 2 2 2 3 4   
4 3 3 3 3 3 4   
4 4 4 4 4 4 4   

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,row,col,l,k,t,state;
    printf("Enter number of row :");
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    row = col = n*2-1;
    for(i=-row/2;i<=row/2;i++)
    {   
        state = 0;
        t =row/2+1;
        k = i<0?-i:i;  
        for(j=-col/2;j<=col/2;j++)
            {
                printf("%d ",t);
                l = j<0?-j:j;
                
                if(j==0 && !state)
                {
                    state=1;
                    if(k<l)t++;
                }
                if(j<0){
                   if(k<l)
                    {
                    if(state)
                        t++;
                    else
                        t--;
                    }
                }
                else{
                    if(k<=l)
                    {
                    if(state)
                        t++;
                    else
                        t--;
                    }
                }
            }  
            printf("\n"); 
    }
    return 0;
}
