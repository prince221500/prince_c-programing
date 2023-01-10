#include<stdio.h>
#include<string.h>
void main()
{
	char a[17] = "prince";
	char b[17] = "singh";
	char c[20];
	c = strcat(a,b);
	printf(" first string =  %s\n",c);
} 
