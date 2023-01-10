// write a c program to take a string from user and count no. of words in it.

#include<stdio.h>
int main()
{

	int c=0,i;
	
	char a[100];
	printf("ENTER STRING");
	scanf("%[^\n]c",a);
	for(i=0;a[i]!='\0';i++)
	
	if(a[i]==' '&& a[i+1]!=' ')
	c++;
	printf("words= %d",c+1);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		

	 

}
