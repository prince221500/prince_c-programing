// write a c program to take an array from user and print the position an element given by user 
#include <stdio.h>

int main() {
    
    int n, p, a[100], i, nu;
    
    printf(" Enter the size of an array (Max 100) \n");
    scanf( " %d ", &n);
    
    printf( " Enter the element of an array \n");
    
    //Input value of an array
    for(i = 0; i < n; i++) {
        scanf(" %d ", &a[i]);
    }
    
    //Position to insert a new element
    
    printf(" Enter the position \n");
    scanf(" %d ", &p);
    
    // Number to be inserted in an array
    
    printf(" Enter number to be inserted \n");
    scanf(" %d ", &nu);
    
    for( i = n; i >= p; i--) {
        a[i] = a[i-1];
    }
    
    a[p-1] = nu;
    
    //Increment the size of an array
    n++;
    
    
    printf(" Array after inserting new element \n");
    
    //Array after inserting new element
    for( i = 0; i < n; i++) {
        printf(" %d ", a[i]);
    }
    return 0;
	}
