#include<stdio.h>
int main()
 {
    int a,b;
    printf("enter x quardinat =");
    scanf("%d",&a);
    printf("enter y quardinet =");
    scanf("%d",&b);
    if (a>0&&b>0)
    {
        printf("first quardinat");
    
    }
    else if (a<0&&b>0)
    {
        printf("second quardinat");
    
    }
    else if (a<0&&b<0)
    {
        printf("third quardinat");
    }
    else if (a>0&&b<0)
    {
        printf("fourth quardinat");
    }
    return 0;
}