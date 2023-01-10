// write a c program to find the greatest and smallest element in a given array .
#include<stdio.h>
int main()
{
	
	int i,n, f=0;
	
		printf(" Enter size of array ");
		scanf(" %d",&n);
		int x[n];
	
	for(i=0;i<=n-1;i++)
	{
	
	printf("enter number ");
	scanf("%d",&x[i]);
	}
		int ele ;
	
		
	printf("enter element");
	scanf("%d",&ele);

	for(i=0;i<=n-1;i++)
	if(ele==x[i])
	{
	f++;
	printf("found at %d ind \n",i);
   }
   if(f==0)
   {
   	printf(" not found ");
   }
}
