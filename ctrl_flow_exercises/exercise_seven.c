#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    if (num1 == 0 || num2 ==0 || num3 == 0) {
        printf("Invalid input\n\n");
    }else if ((num1 % num2 == 0 ) && (num1 % num3 == 0)) {
        printf("Divisible\n");
    }else if ((num2 % num1 == 0) && (num2 % num3 == 0)) {
        printf("Divisible\n");
    }else if ((num3 % num1 == 0) && (num3 % num2 == 0)) {
        printf("Divisible\n");
    }else{
        printf("Indivisible\n");
    }

    return 0;
}