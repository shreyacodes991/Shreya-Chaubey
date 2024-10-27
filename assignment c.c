/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/#include <stdio.h>
//code for assignment operators
int main() {
    int a = 10, b = 5;  //declaration and defining variables a and b

    // Display initial values
    printf("Initial value of a: %d\n", a); 
    printf("Initial value of b: %d\n", b);

    // Using assignment operators
    a += b;  // a = a + b: Adds b to a and assigns the result to a
    printf("\nAfter a += b, a = %d\n", a);

    a -= b;  // a = a - b: Subtracts b from a and assigns the result to a
    printf("After a -= b, a = %d\n", a);

    a *= b;  // a = a * b: Multiplies a by b and assigns the result to a
    printf("After a *= b, a = %d\n", a);

    a /= b;  // a = a / b: Divides a by b and assigns the result to a
    printf("After a /= b, a = %d\n", a);

    a %= b;  // a = a % b: Assigns the remainder of a divided by b to a
    printf("After a %= b, a = %d\n", a);

    return 0;
}

