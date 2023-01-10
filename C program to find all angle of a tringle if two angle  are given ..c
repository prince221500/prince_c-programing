// c program to find all angle of a triangle if two angle are given.
#include<stdio.h>
void main()
{
	int a , b , c;
	printf(" Enter first angle ");
	scanf("%d",&a);
	printf(" Enter second angle");
	scanf("%d",&b);
	c= 180 - (a+b);
	printf("third angle %d",c);
	return 0;
}
