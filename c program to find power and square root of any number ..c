// c program to find power and square root of any number .
#include <stdio.h>
#include <math.h>

int main()
{
    float num, root;

    
    printf("Enter any number to find square root: ");
    scanf("%f", &num);

    
    root = sqrt(num);

    
    printf("Square root of %.2f = %.2f", num, root);

    return 0;
}
