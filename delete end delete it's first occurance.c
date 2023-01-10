// write a program to take an array from user and take an element to  delete and delete it's first occurance from arrray .
#include<stdio.h>
int main()
{
	int n,i,e,y;
	printf("enter array number = ");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
		{
		
	scanf("%d",&x[i]);
	printf(" %d \n",x[i]);
}
scanf("%d",&e);
	for(i=0;i<=n-1;i++)
	if(x[i]==e)
	{
		for(y=i;y<=n-1;y++)
		x[y]=x[y+1];
		x[n-1]=0;
		// delete it's first occurance 
		break;
	}
		for(i=0;i<n-1;i++)
printf("%d",x[i]);
return 0;

   
}
