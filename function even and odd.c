// write a program to check given number is even or odd using functions.
#include<stdio.h>
void number(int a)
{
	
	

	if(a%2==0)
	{
		printf("%d is even number",a);
	}
	else
	{
		printf(" %d is odd number",a);
	}
}
	int main()
	{
		int n;
		printf(" enter number  ");
		scanf("%d",&n);
		number (n);
		
	}

