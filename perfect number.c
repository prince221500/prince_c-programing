// write a c program to check given number is palindrome or not.
# include <stdio.h>   

int main()   
{   
 int i, N, S = 0 ;   
  
 printf(" Please Enter any number ") ;   
 scanf("%d", &N) ;   
 
 for(i = 1 ; i < N ; i++)   
  {   
   if(N % i == 0)   
     S = S + i ;   
  }    

 if (S == N)   
    printf(" %d is a Perfect Number", N) ;   
 else   
    printf("%d is not the Perfect Number", N) ;   

   
}
