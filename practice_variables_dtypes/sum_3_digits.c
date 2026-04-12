#include <stdio.h>

int main() {
    int number, hundreds, tens, ones, sumOfNumbers;

    printf("Enter a 3 digit number here: ");
    scanf("%d", &number);

    hundreds = number / 100;
    tens = (number % 100) / 10;
    ones = number % 10;

    sumOfNumbers = hundreds + tens + ones;

    printf("The sum of the three digits entered is = %d\n\n", sumOfNumbers);

    return 0;
}