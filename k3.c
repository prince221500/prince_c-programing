
#include<stdio.h>
// divisible both number ya not divisible
int main()
{
    int a;
    printf("Enter the number =");
    scanf("%d",&a);
    if (a%7==0&&a%3==0)
    {
        printf("divisible both number ");
    }
    else
    {
        printf("not divisible both number");
    }
    return 0;

    }
