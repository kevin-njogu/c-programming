#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max, min;
    printf("Please enter the first number: ");
    scanf("%d", &num1);

    printf("Please enter the second number: ");
    scanf("%d", &num2);

    printf("Please enter the third number: ");
    scanf("%d", &num3);

    if (num1 < num2) {
        max = num2;
        min = num1;
    }

    if (max < num3) {
        max = num3;
    }

    if (min > num3) {
        min = num3;
    }

    printf("The MAXIMUM value between %d, %d, %d is = %d\n", num1, num2, num3, max);
    printf("The MINIMUM value between %d, %d, %d is = %d\n\n", num1, num2, num3, min);

    return 0;

}