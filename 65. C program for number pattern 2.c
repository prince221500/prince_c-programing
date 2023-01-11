#include <stdio.h> 
int main() 
{ int rows, cols, i, j; 
 
 scanf("%d", &rows);
 
 scanf("%d", &cols); 
 for(i=1; i<=rows; i++) 
 { 
 for(j=1; j<=cols; j++) 
 { 
 if(j%2 == 1) 
 { 
printf("0"); 
 } 
else 
 { 
printf("1"); 
 } 
 } 
 printf("\n"); 
 } 
 return 0; 
} 