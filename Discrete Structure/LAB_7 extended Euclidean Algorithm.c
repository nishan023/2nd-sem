/*
Step 1: Define the gcdExtended function.
Step 2: Declare variables to store the results of recursive calls.
Step 3: Update x and y using the results of the recursive call.
Step 4: Return the GCD.
Step 5: In the main function, get user input for a and b, and call the gcdExtended` function.
    */

// C program to demonstrate working of extended
// Euclidean Algorithm
#include <stdio.h>

// C function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

// Driver Program
int main()
{
    int x, y;
    int a, b;
    printf("Enter the value for 'a' and 'b': ");
    scanf("%d%d", &a, &b);
    int g = gcdExtended(a, b, &x, &y);
    printf("gcd(%d, %d) = %d, x= %d, y=%d\n", a, b, g, x, y);
    return 0;
}
