#include <stdio.h>

int factorial(int num) {
    if (num == 1) {
        return 1;
    }
    return num * factorial(num-1);
}


int main() {
    int num;
    int multiplication = 0;

    printf("Please enter the number: ");
    scanf("%d", &num);

    multiplication = factorial(num);

    printf("The factorial of numbers up to %d is %d\n", num, multiplication);

    return 0;
}