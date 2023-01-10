// Write a C program to input the cost price , selling price and maintenance price of the product and then calculate profit or loss along with profit/loss percentage
#include<stdio.h>
 
int main()
{
  	float Unit_Price, Sales_Amount, Amount;
 
  	printf("\n Please Enter the Actrual Product Cost : ");
  	scanf("%f", &Unit_Price);
  
  	printf("\n Please Enter the  Selling Price :  ");
  	scanf("%f", &Sales_Amount);
  
  	if (Sales_Amount > Unit_Price)
  	{
  		Amount = Sales_Amount - Unit_Price;
  		printf("\n Profit Amount  =  %f", Amount);
  	}
  	else if(Unit_Price > Sales_Amount)
    {
    	Amount = Unit_Price - Sales_Amount;
  		printf("\n Loss Amount  =  %f", Amount);
	}
  	else
    	printf("\n No Profit No Loss!");
    }
