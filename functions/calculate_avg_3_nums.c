#include <stdio.h>

float findAverage(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;
}


int main() {
    int value1, value2, value3;

    printf("Enter value1, value2 and value3 below: \n");
    scanf("%d%d%d", &value1, &value2, &value3);

    float avg = findAverage(value1, value2, value3);

    printf("The average of %d, %d and %d is: %.2f\n", value1, value2, value3, avg);

    return 0;
}