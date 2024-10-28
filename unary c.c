/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//code for unary operator
#include <stdio.h>

int main() {
    int x = 10; //declaring and defining the variable a
    int y = -5; //declaring and defining the variable b
    
    // Unary Plus
    int plus = +x; // no change, just shows unary plus
    printf("Unary Plus of x: %d\n", plus);
    
    // Unary Minus
    int minus = -x; // flips the sign
    printf("Unary Minus of x: %d\n", minus);
    
    // Increment
    int preIncrement = ++x; // increment before use
    printf("Pre-increment of x: %d\n", preIncrement);
    
    int postIncrement = y++; // use before increment
    printf("Post-increment of y: %d\n", postIncrement);
    printf("Value of y after post-increment: %d\n", y);
    
    // Decrement
    int preDecrement = --x; // decrement before use
    printf("Pre-decrement of x: %d\n", preDecrement);
    
    int postDecrement = y--; // use before decrement
    printf("Post-decrement of y: %d\n", postDecrement);
    printf("Value of y after post-decrement: %d\n", y);
    
    
    return 0;
}
