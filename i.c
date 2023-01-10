#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter ammount \n");
    scanf("%d\n",&a);
    a=a-100;
    b=a/2000;
    a=a-(b*2000);
    c=a/500;
    a=a-(c*500);
    d=100+1;
    printf("2000 rs note = %d\n",b);
    pripntf("500 rs note = %d\n",c);
    printf("100 rs note = %d\n",d);
}