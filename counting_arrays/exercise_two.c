#include <stdio.h>
#define SIZE 20
//count the appearance of values in an array and print the value that appears most and the number of appearances.

int main () {
    int arr[SIZE] = {3, 4, 4, 0, 6, 8, 2, 7, 3, 6, 1, 6, 2, 4, 7, 4, 5, 6, 9, 4};
    int countArr[10] = {0};
    int max = 0, index;

    for (int i = 0; i < SIZE; i++) {
        countArr[arr[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        if (countArr[i] > max) {
            max = countArr[i];
            index = i;
        }
        printf("%d,", countArr[i]);
    }
    printf("*\n\n");
    printf("The number %d has the highest occurence of %d times in the arr\n", index, max);

    return 0;
}