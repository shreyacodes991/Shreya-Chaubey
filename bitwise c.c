/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//code for bitwise operators
#include <stdio.h>

int main() {
    int a = 12;  // defining and declaration of variable a
    int b = 25;  // defining and declaration of variable b

    // Display the values
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    // Using bitwise operators and displaying the results
    printf("\nResults of bitwise operations:\n");
    printf("a & b : %d\n", a & b);    // Bitwise AND: Sets each bit to 1 if both corresponding bits are 1
    printf("a | b : %d\n", a | b);    // Bitwise OR: Sets each bit to 1 if at least one of the corresponding bits is 1
    printf("a ^ b : %d\n", a ^ b);    // Bitwise XOR: Sets each bit to 1 if only one of the corresponding bits is 1
    printf("~a : %d\n", ~a);          // Bitwise NOT of a: Inverts the bits of a
    printf("a << 1 : %d\n", a << 1);  // Left shift a by 1 bit: Shifts the bits of a one position to the left, filling the rightmost bit with 0.
    printf("a >> 1 : %d\n", a >> 1);  // Right shift a by 1 bit: Shifts the bits of a one position to the right.

    return 0;  //ends the execution of a function and returns control to the point where the function was called
}
