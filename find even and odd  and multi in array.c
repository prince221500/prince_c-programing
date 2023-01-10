#include<stdio.h>
int main()
{
	int x[5],y[5],z[5];
	int i;
	
	for( i=0;i<=4;i++)
	{
	printf("enter first  number ");
		scanf("%d",&x[i]);
		if(x[i]%2==0)
		{
			printf(" no is even \n");
		
		}
		else
		{
			printf(" no is odd \n");
			
		}
	}
	for(i=0;i<=4;i++)
	{
	printf(" enter second number \n");
	scanf(" %d",&y[i]);
		if(y[i]%2==0)
		{
			printf(" no is even \n");
		
		}
		else
		{
			printf(" no is odd \n");
			
		}
		
	}
	for(i=0;i<=4;i++)
	{
		z[i]=x[i]*y[i];
		printf(" multi of two array ", z[i]);
			if(y[i]%2==0)
		{
			printf(" no is even \n");
		
		}
		else
		{
			printf(" no is odd \n");
			
		}
	}
}
