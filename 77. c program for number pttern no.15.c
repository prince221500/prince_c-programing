#include <stdio.h> 
int main() 
{ int i, j, rows, cols; 
 
 printf("Enter rows: "); 
 scanf("%d", &rows); 
printf("Enter columns: "); 
scanf("%d", &cols); 
 for(i=1; i<=rows; i++) 
 { 
 for(j=1; j<=cols; j++) 
 { 
 if((i==1 || i==rows) && (j==1 || j==cols)) 
 { printf("0"); 
 } 
 else if(i==1 || i==rows || j==1 || j==cols) 
 { 
 printf("1"); 
 } else 
 { 
 
 printf("0"); 
 } 
 } 
 printf("\n"); 
 } 
 return 0; 
} 