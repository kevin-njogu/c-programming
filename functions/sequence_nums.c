#include <stdio.h>

long sequenceNums(int num) {
    long result = 0;
    int appendDigit = 9;

    for (int i = 1; i <= num; i++) {
        if (num <= 9) {
            result = result * 10 + i;
        }else {
            result = result * 10 + appendDigit;
        }
    }
    return result;
}



int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The sequence is:  %ld\n", sequenceNums(number));

    return 0;
}