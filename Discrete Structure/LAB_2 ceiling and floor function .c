// Write a program to Implement ceiling and floor function.

#include <stdio.h>
#include <math.h>
int main()
{
    float val;
    float fVal, cVal;
    printf("\n*****CEILING & FLOORING FUNCTIONS*****\n");
    printf("Enter a float value: ");
    scanf("%f", &val);
    // floor function return the floor value of given argument
    fVal = floor(val);
    // ceil function return the floor value of given argument
    cVal = ceil(val);
    printf("\nFloor value: %0.2f \nCeil value: %0.2f\n", fVal, cVal);
    return 0;
}
