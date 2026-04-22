#include <stdio.h>

int calculateFactorial(int num) {
    int factorial = 1;

    if (num <= 0) {
        return -1;
    }else {
        for (int i = 1; i <= num; i++) {
            factorial = factorial * i;
        }
        return factorial;
    }
}

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("The factorial of %d is: %d\n", number, calculateFactorial(number));

    return 0;
}