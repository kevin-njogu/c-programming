#include <stdio.h>

int main() {
    int number, hundreds, tens, ones, reversedNum;

    printf("Enter a three digit number here: ");
    scanf("%d", &number);

    hundreds = number / 100;
    tens = (number / 10) % 10;
    ones = number % 10;

    reversedNum = (ones * 100) + (tens * 10) + (hundreds * 1);

    printf("The reversed output of %d is = %d\n\n", number, reversedNum);

    return 0;
}