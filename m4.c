#include <stdio.h>
// FIND OUT TOTAL MARKS, AVERAGE AND MARKS PERCENTAGE
int main()
{
    int english, chemistry, computers, physics, maths; 
    float Total, Average, Percentage;

    printf("Please Enter the marks of five subjects: \n");
    scanf("%d%d%d%d%d", &english, &chemistry, &computers, &physics, &maths);

    Total = english + chemistry + computers + physics + maths;
    Average = Total / 5;
    Percentage = (Total / 500) * 100;

    printf("Total Marks = %f\n", Total);
    printf("Average Marks = %f\n", Average);
    printf("Marks Percentage = %f\n", Percentage);
}
