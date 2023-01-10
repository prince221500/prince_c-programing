#include<stdio.h>
void main()
{
    int s, x;
    printf(" enter any text",s);
    scanf("%d",&s);
    printf("your table\n");
    
    x=s;
    s=x;
    int m=1+1;
    
    s=m;
    x=s;
    while(x<=20)
    {
        printf("%d\n",x);
        x=x+2;
    }
}
