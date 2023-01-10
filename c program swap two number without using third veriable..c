// c program swap two number without using third veriable.
#include<stdio.h>
void main()
{
	int a , b;
	printf(" enter first number (a) :-");
	scanf("%d",&a);
	printf("enter second number (b) ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a= %d ,b=%d",a,b);
	
}
