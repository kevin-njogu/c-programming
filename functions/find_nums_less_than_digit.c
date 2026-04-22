#include <stdio.h>

float findAverage(int number, int digit) {
    int remainder, sum = 0, count = 0;
    float avg;

    if (number < 0) {
        number = number * (-1);
    }

    do {
        remainder = number % 10;
        if (remainder < digit) {
            sum += remainder;
            count += 1;
        }
        number = number / 10;
    } while (number >= 1);

    avg = sum / count;
    return avg;
}

int main() {
    int num, digit;

    printf("Enter the first number below: ");
    scanf("%d", &num);

    printf("Enter the digit below: ");
    scanf("%d", &digit);

    printf("The average is: %.2f\n", findAverage(num, digit));

    return 0;
}