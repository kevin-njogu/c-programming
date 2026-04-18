#include <stdio.h>

int main() {
    char operation;
    int num, power;
    int solution = 1;

    printf("Enter the type of operation [+, -, *, /, ^]\n\n");

    printf("Enter the operation: ");
    scanf("%c", &operation);

    printf("Enterm the first number: ");
    scanf("%d", &num);

    printf("Enter the second number: ");
    scanf("%d", &power);

    if (operation == '^') {
        while (power > 0) {
            solution = solution * num;
            power -= 1;
        }
        printf("The power is: %d\n\n", solution);
    }else {
        printf("Invalid operations");
    }

    return 0;

}