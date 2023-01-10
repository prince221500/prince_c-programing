#include<stdio.h>
int main()
{
	
	int i,n;
	
		printf(" Enter size of array ");
		scanf(" %d",&n);
		int x[n];
	
	for(i=0;i<=n-1;i++)
	
	printf("enter number ");
	scanf("%d",&x[i]);
	int ele ;
	printf("enter element");
	scanf("%d",&ele);
	for(i=0;i<=n-1;i++)
	if(ele==x[i])
	printf("found at %d ind \n",i);

}
