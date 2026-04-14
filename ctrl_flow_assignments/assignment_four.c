#include <stdio.h>

/*

Write a program that reads an input number from the user.
The program should print "1" if the value is positive, "-1" if it's negative, and "0" if it equals to zero.
*/

int main() {
    int value, output;

    printf("Enter a number: ");
    scanf("%d", &value);

    output = value > 0 ? 1:value < 0 ? -1:0;

    printf("The output of this algorithm is = %d\n\n", output);

    return 0;

}