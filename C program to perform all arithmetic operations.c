// C program to perform all arithmetic operations.

#include <stdio.h>

int main()
{
    int a, b;
    
    int sum, sub, mult, mod;
    
	
	float div;
    
	printf("Enter first number :-  ");
    
	scanf("%d", &a);
    
	printf("Enter second number :- ");
    
	scanf("%d",&b);
	
	sum = a + b;
    
	sub = a - b;
    
	mult = a * b;
    
	div = (float)a / b;
    
	mod = a % b;
    
	printf("SUM = %d\n", sum);
    
	printf("DIFFERENCE = %d\n", sub);
    
	printf("PRODUCT = %d\n", mult);
    
	printf("QUOTIENT = %f\n", div);
    
	printf("MODULUS = %d", mod);

    return 0; 
}
