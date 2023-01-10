// write a c program to take an array of marks of students from user and count the number of students who score more then 60 marks
#include<stdio.h>
int main()
{
	int n,i,a=0;
	printf("enter array number");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
		
	scanf("%d",&x[i]);
	for(i=0;i<=n-1;i++)

    if(x[i]>60)
    a++;
    printf("%d scored marks greater then 60",a);
    
    
}
