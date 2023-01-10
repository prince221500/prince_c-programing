#include<stdio.h>
// voter ya nonvoter
int main()
{
    int age;
    printf("Enter your  age =");
    scanf("%d",&age);
    if (age>=18)
   {
     printf("you are eligible for voting");
   }
   else
 {
 printf("you are not eligible to voting %d years left ",18-age);
     }
         return 0; 
}
