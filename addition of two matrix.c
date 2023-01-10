// write a program to take 3*3 matrix from user and print sum of all its main diagonal elements.
#include<stdio.h>
int main ()
{
	int a[3][3] , b[3][3] , c[3][3] , m,n;
	for(m=0;m<=3;m++)
	{
		for(n=0;n<3;n++)
		{
			printf(" enter first matrix  element  ");
			scanf("%d",&a[m][n]);
			}	
	}
			for(m=0;m<3;m++)
	{
		for(n=0;n<=3;n++)
		{
			printf(" enter second matrix  element ");
			scanf("%d",&b[m][n]);
			}	
	}
		for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
		c[m][n] = a[m][n]+b[m][n];
		printf("%d",c[m][n]);
			}	
	}
}
