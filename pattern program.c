// pattern program
#include <stdio.h>
int main(void) 
{
int i,j;
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
printf(" ");
}
for(j=0;j<=i;j++)
{
printf(" *");
}
printf("\n");
}

}
