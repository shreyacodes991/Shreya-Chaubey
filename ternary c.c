/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//code for ternary operators
#include <stdio.h>

int main() {
    int a = 10, b = 20; //declaring and defining variables a and b
    int max, min; //declaring variables max and min

    // Using the ternary operator to find the maximum
    max = (a > b) ? a : b;
    printf("The maximum value is: %d\n", max);

    // Using the ternary operator to find the minimum
    min = (a < b) ? a : b;
    printf("The minimum value is: %d\n", min);

    return 0;
}
