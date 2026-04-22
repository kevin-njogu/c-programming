#include <stdio.h>

void findMax(int num1, int num2) {
    int max = num1 > num2 ? num1:num2;
    printf("Maximum number is %d\n", max);
}

int main() {
    int value1, value2;

    printf("Enter the first number: ");
    scanf("%d", &value1);

    printf("Enter the second number: ");
    scanf("%d", &value2);

    findMax(value1, value2);

    return 0;
}