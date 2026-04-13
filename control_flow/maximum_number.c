#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter your first number here: ");
    scanf("%d", &num1);

    printf("Enter your second number here: ");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("Max number is num1: %d\n", num1);
    else if (num1 == num2)
        printf("Both numbers are equal\n");
    else
        printf("Max number is num2: %d\n\n", num2);

    return 0;
}