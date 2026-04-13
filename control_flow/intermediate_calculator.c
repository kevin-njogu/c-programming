#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter the operator for this calculation: ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            printf("The sum of %d and %d is = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("The subtraction between %d and %d is = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            if (num1 == 0 || num2 == 0) {
                printf("Multiplication operation with zero is forbidden \n");
                break;
            }
            printf("The multiplication of %d and %d is = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num1 == 0 || num2 == 0) {
                printf("The division operation with zero is forbidden \n");
                break;
            }
            printf("The division of %d and %d is = %.2f\n", num1, num2, (float)num1 / num2);
            break;
        case '%':
            if (num1 == 0 || num2 == 0) {
                printf("The remainder operation with zero is forbidden \n");
                break;
            }
            printf("The remainder of %d and %d is = %d\n", num1, num2, num1 % num2);
            break;
        default:
            printf("Invalid operation!!!");
            break;
    }
    return 0;
}