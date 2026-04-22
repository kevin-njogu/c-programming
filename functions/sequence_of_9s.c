#include <stdio.h>

long sequenceNines(int num) {
    long result = 0;
    int appendDigit = 9;
    for (int i = 1; i <= num; i++) {
        result = result * 10 + appendDigit;
    }
    return result;
}


int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The sequence of nines is: %ld\n", sequenceNines(number));

    return 0;
}