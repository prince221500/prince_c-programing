// write a c program to check given number is armstrong or not.
#include<stdio.h>
int main()  
{  
    int a, b=0,c,d;  
    printf("Enter the number ");  
    scanf("%d", & c);  
    d = c;  
    while (c > 0)  
    {  
        a = c% 10;  
        b = b + a * a * a;  
        c = c / 10;  
    }  
    if (b == d)  
    {  
        printf("its an armstrong number");  
    } else  
    {  
        printf("its not an armstrong number");  
    }  
   
}   
