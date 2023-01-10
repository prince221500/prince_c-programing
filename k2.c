#include<stdio.h>
// find how many days ,weeks, months, years in  given days

int main()
{
    int a,b,c,d,e;

    printf("Enter days = ");
    scanf("%d",&a);
    
    b=a/365;
    a=a-(b*365);
    c=a/30;
    a=a-(c*30);
    d=a/7;
    a=a-(d*7);
    

    printf("years=%d\nmonth=%d\nweeks=%d\ndays=%d",b,c,d,a);
    return 0;
}
