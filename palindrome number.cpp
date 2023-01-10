// write a c program to check given number is palindrome or not.
#include<stdio.h>
int main()
{
	int a,b=0,c,d;
	printf("Enter any number");
	scanf("%d",&d);
	a=d;
	while(a!=0)
	{
		c=a%10;
		b=b*10+c;
		a=a/10;
	}
	if (d==b)
	printf("%d is a palindrome number ",d);
	else
	printf("%d is not a palindrome number ",d);
	
	
}
