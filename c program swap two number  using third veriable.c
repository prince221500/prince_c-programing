// c program swap two number  using third veriable
#include<stdio.h>
void main()
{
	int a , b ,c;
	printf(" enter first number (a) :-");
	scanf("%d",&a);
	printf("enter second number (b) ");
	scanf("%d",&b);
	c=a+b;
	b=c-b;
	a=c-b;
	printf("a= %d ,b=%d",a,b);
	
}
