// ref --> https://www.programiz.com/c-programming/examples/pyramid-pattern

// #include <stdio.h>
// int main() {
//    int rows, coef = 1, space, i, j;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 0; i < rows; i++) {
//       for (space = 1; space <= rows - i; space++)
//          printf("  ");
//       for (j = 0; j <= i; j++) {
//          if (j == 0 || i == 0)
//             coef = 1;
//          else
//             coef = coef * (i - j + 1) / j;
//          printf("%4d", coef);
//       }
//       printf("\n");
//    }
//    return 0;
// }
/*
#include <stdio.h>   
long factorial(int);  
int main()  
{  
    int i, n, c;  
    printf("Enter the number of rows you wish to see in pascal triangle\n");  
    scanf("%d", & n);  
    for (i = 0; i < n; i++) {  
        for (c = 0; c <= (n - i - 2); c++) printf(" ");  
        for (c = 0; c <= i; c++) printf("%ld ", factorial(i) / (factorial(c) * factorial(i - c)));  
        printf("\n");  
    }  
    return 0;  
}  
long factorial(int n) {  
    int c;  
    long result = 1;  
    for (c = 1; c <= n; c++) result = result * c;  
    return result;  
}  
*/

#include<stdio.h>
void main()
{
   int i, n, c; 
   for (i = 0; i < n; i++) {  
      for (c = 0; c <= (n - i - 2); c++) printf(" ");  
      for (c = 0; c <= i; c++) printf("%ld ", factorial(i) / (factorial(c) * factorial(i - c)));  
      printf("\n"); 





}


















