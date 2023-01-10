#include<stdio.h>
int main()
{
	
	int i,n;
	
		int x[5]={1,5,2,8,5};
	
	for(i=0;i<=4;i++)
{
	
	printf(" %d\n ",x[i]);
}
	for(i=0;i<4;i++)
	x[i]>x[i++];
	{
		n=x[i++];
		x[i++]=n;
		x[i]=n;
	}
}
