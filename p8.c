#include<stdio.h>
//atm machine note print code
int main()
{
    int a,b,c,d;
    printf("Enter ammount \n");
    scanf("%d\n",&a);

    b=a/2000;
    a=a-(b*2000);
    c=a/500;
    a=a-(c*500);
    d=a/100;
    a=a-(d*100);
    printf("2000 rs note = %d\n",b);
    printf("500 rs note = %d\n",c);
    printf("100 rs note = %d\n",d);
    return 0;

}
