// eletricity bill
#include<stdio.h>
int main()
{
	float a,u,t;
	printf("Enter you eletricity bill ");
	scanf("%f",&a);

	
	if (a<=50)
	{
	
	u=a*0.5;
	}
else if(a<=150)
{

u=25+(a-50)*0.75;
}

else if (a<=250)
{
u=100+(a-150)*1.20;
}
else
{
u=220+(a-250)*1.5;

}
t=u+u*0.2;
{
	printf("%f",t);
}

}
