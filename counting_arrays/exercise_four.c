#include <stdio.h>
#define SIZE 8

int main() {
    char arr[SIZE] = {'k', 'i', 'b', 'r', 'c', 'k', 'z', 'm'};
    int countArr[26] = {0};
    int maxIndex = 0, index;

    for (int i = 0; i < SIZE; i++) {
        index = arr[i] - 'a';
        printf("The index of %c in the alphabet is %d\n", arr[i], index);
        countArr[index]++;
    }

    for (int i = 0; i < 26; i++) {
        if (countArr[i] > countArr[maxIndex]) {
            maxIndex = i;
        }
    }
    printf(" \n");
    printf("The character %c has highest occurence of %d\n", maxIndex + 'a', countArr[maxIndex]);

    return 0;
}