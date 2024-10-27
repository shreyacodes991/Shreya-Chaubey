/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a = 10, b = 20, sum, sub, mult, divi, rem;  // defining and initializing values
    printf("The 1st value is: %d\n", a);  // printing value of a
    printf("The 2nd value is: %d\n", b);  // printing value of b
    
    sum = a + b;   // addition
    sub = b - a;   // subtraction
    mult = a * b;  // multiplication
    divi = b / a;  // division
    rem = b % a;   // modulus
    
    printf("\nSum = %d", sum);            // prints the sum
    printf("\nSubtraction = %d", sub);    // prints the subtraction
    printf("\nMultiplication = %d", mult); // prints the multiplication
    printf("\nDivision = %d", divi);      // prints the division
    printf("\nRemainder = %d", rem);      // prints the remainder
    
    return 0;
}
