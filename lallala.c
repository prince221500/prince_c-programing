#include <stdio.h>
int main() {
   int c=0,d=15,e=100,a,b;
   a=c>1?d>1||e>1?10:20:30;
   b=c!=1?d>1||e>1?10:20:30;
   printf("a=%d, b=%d",a,b);
    return 0;
}

