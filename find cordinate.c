// Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
#include<stdio.h>
int main ()
{
	int x,y;
	printf("Enter x codinate ");
	scanf("%d",&x);
	printf("Enter y codinate ");
	scanf("%d",&y);
	if(x>0&&y>0)
	{
		printf("first codinate");
	}
	else if (x<0&&y>0)
	{
		printf("second codinate ");
	}
	else if (x<0&&y<0)
	{
		printf("third codinate");
		
	}
	else if (x>0&&y<0)
	{
		printf("fourth codinate");
		
	}


	}
