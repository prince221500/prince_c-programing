//  write a c function to make a function of your which will work exacetlly same as power function of math library.
#include<stdio.h>
#include<math.h>
void power(int a,int b)
{
	int k=1;
	int j;
	for(j=1;j<=b;j++)
	{
		k=k*a;
	}
	printf(" power is = %d",k);
}
int main()
{
	int s,m;
	printf(" enter number ");
	scanf("%d",&s);
	printf("enter power");
	scanf(" %d",&m);
	power(s,m);
}
