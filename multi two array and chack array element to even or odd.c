#include<stdio.h>
int main()
{
	int x[5],y[5],z[5];
	int i;
	for(i=0;i<=4;i++)
	{
	printf("enter number ");
	scanf("%d",&x[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("enter any number ");
		scanf("%d",&y[i]);
	}
	for(i=0;i<=4;i++)
	{
		z[i]=x[i]*y[i];
		printf("%d\n",z[i]);
	}
if(z[i]%2==0)
{
	printf("this number is even ");
}
	else{
	
	printf("odd");
}
}
