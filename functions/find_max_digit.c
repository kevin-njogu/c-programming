#include <stdio.h>

void findMaxDigit(int number) {

    if(number < 10 || number > 99) {
        printf("Invalid input, enter a number between 10 and 99\n");
    }else {
        if (number / 10 > number % 10) {
            printf("The maximum digit in number %d is: %d\n", number, number / 10);
        }else if (number / 10 == number % 10) {
            printf("Both digits of number %d are equal.\n", number);
        }else {
            printf("The maximum digit in number %d is: %d\n", number, number % 10);
        }
    }
}


int main() {
    int number;

    printf("Enter a number between 10 and 100: \n");
    scanf("%d", &number);

    findMaxDigit(number);

    return 0;
}