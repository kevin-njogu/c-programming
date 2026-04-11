#include <stdio.h>

/*
-Build a calculator that print mathematical operations of two numbers (5 & 2)
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Remainder
*/

int main() {
    printf("The sum of %d and %d is: %d\n\n", 5, 2, 5+2);
    printf("The subtraction of %d from %d is: %d\n\n", 2, 5, 5-2);
    printf("The multiplication of %d and %d is: %d\n\n", 5, 2, 5*2);
    printf("The division of %d and %d is: %d\n\n", 5, 2, 5/2);
    printf("The remainder of dividing %d and %d is: %d\n\n", 5, 2, 5%2);
    return 0;
}