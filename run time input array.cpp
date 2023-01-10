#include<stdio.h>
int main()
{
	
	int i,n;
	
		printf(" Enter size of array ");
		scanf(" %d",&n);
		int x[n];
	
	for(i=0;i<=n-1;i++)
	{
	printf("enter number ");
	scanf("%d",&x[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf(" value %d\n",x[i]);
	}
	
}
