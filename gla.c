#include<stdio.h>
int main()
{
    int prince,kumar,singh,gla;
    printf("Enter amount\n");
    scanf("%d",&prince);
    kumar=prince/2000;
    prince=prince-(kumar*2000);
    singh=prince/500;
    prince=prince-(singh*500);
    gla=prince/100;
    prince=prince-(gla*100);
    printf("2000 rs note = %d\n",kumar);
    printf("500 rs note = %d\n",singh);
    printf("100 rs note = %d\n",gla);
    
}