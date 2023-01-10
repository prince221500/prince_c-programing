// Write a C program to input any character and check whether it is alphabet, digit or special character. 
#include <stdio.h>
#include<ctype.h>
 
int main()
{
	char m;
  	
	printf(" lease Enter any character :  ");
  	scanf("%c", &m);
  
  	if (isalpha (m))
  	{
  		printf(" is an Alphabet  %c", m);  	
  	} 
  	else if (isdigit(m))
  	{
  		printf("  is a Digit  %c", m);  	
  	}
  	else
    	printf(" is a Special Character  %c", m);
  
  	return 0;
}
