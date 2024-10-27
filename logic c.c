/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//code for logic operator
#include <stdio.h>

int main() {
    int a = 1;  // true (non-zero value)
    int b = 0;  // false (zero value)

    // Display the values
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    // Using logical operators and displaying the results
    printf("\nResults of logical operations:\n");
    printf("a && b : %d\n", a && b);   // Logical AND
    printf("a || b : %d\n", a || b);   // Logical OR
    printf("!a : %d\n", !a);           // Logical NOT on a
    printf("!b : %d\n", !b);           // Logical NOT on b

    return 0;
}
