// write a program to check given number is prime or not prime using function.
#include <stdio.h>
int prime(int n) 
{
    
    if(n == 1){
        printf("1 is neither prime nor composite.");
            }  
    int c = 0;         
    for(int i = 2; i < n; i++)  
    {
        if(n % i == 0)
            c++;
    }
    if(c == 0)           
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
    
}
int main()
{
	 int a;        
    printf("Enter the number: ");
    scanf("%d",&a); 
    prime(a);
}
