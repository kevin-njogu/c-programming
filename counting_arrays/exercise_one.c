#include <stdio.h>
#define SIZE 8

//counting occurences of a number in an array

int main() {
    int arr[SIZE] = {0, 5, 4, 2, 1, 3, 2, 0};
    int countArr[6] = {0};

    for (int i = 0; i < SIZE; i++) {
        countArr[arr[i]]++;
    }

    for (int i = 0; i < 6; i++) {
        printf("%d, ", countArr[i]);
    }

    return 0;
}