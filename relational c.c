/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b;

    // Input values from the user
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Using relational operators and displaying the results
    printf("\nResults of relational operations:\n");
    printf("a == b : %d\n", a == b);    // Checks if a is equal to b
    printf("a != b : %d\n", a != b);    // Checks if a is not equal to b
    printf("a < b  : %d\n", a < b);     // Checks if a is less than b
    printf("a > b  : %d\n", a > b);     // Checks if a is greater than b
    printf("a <= b : %d\n", a <= b);    // Checks if a is less than or equal to b
    printf("a >= b : %d\n", a >= b);    // Checks if a is greater than or equal to b

    return 0;
}
