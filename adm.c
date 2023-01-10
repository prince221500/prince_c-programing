// eligibilty of admission 
#include<stdio.h>
int main()
{
	int m,p,c,t;
	printf("Enter your phy marks :-");
	scanf("%d",&p);
	printf("Enter your chy marks :-");
	scanf("%d",&c);
	printf("Enter your math marks :-");
	scanf("%d",&m);
	t=m+p+c;
	printf("your total marks%d\n",t);
	if (m>=65&&p>=55&&c>=50&&t>=180)
	{
		printf("eligble to admission ");
	
	}
	else
	{
		printf("not eligble to admission");
	}
}
