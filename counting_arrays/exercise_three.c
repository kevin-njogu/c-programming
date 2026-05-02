#include <stdio.h>
#define SIZE 8

//count appearanes for an array with values between 5 - 10

int main() {
    int arr[SIZE] = {7, 5, 6, 9, 6, 7, 10, 7};
    int countArr[6];
    int maxIndex = 0;

    for (int i = 0; i < SIZE; i++) {
        countArr[arr[i]-5]++;
    }

    for (int i = 0; i < 6; i++) {
        if (countArr[i] > countArr[maxIndex]) {
            maxIndex = i;
        }
        printf("%d, ", countArr[i]);
    }

    printf(" \n");
    printf("Number %d has the highest occurence of %d times\n", maxIndex + 5, countArr[maxIndex]);

    return 0;
}   