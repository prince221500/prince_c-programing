#include<stdio.h>
int main()
{
	int x[5] ,i;
	for(i=0;i<=4;i++)
	{
	
	printf(" enter number\n ");
	scanf("%d",&x[i]);
	if(x[i]%2==0)
	{printf("even");
	}
	else{
		printf("odd");
	}
}

}
