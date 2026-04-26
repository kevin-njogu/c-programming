#include <stdio.h>
#define SIZE 4
#define ROTATION 3

int main() {
    int arr[SIZE] = {5,4,7,3};
    int temp;

    for (int k = 0; k < ROTATION; k++) {
        temp = arr[SIZE - 1];
        for (int i = SIZE - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[SIZE - SIZE] = temp;
    }

    for (int j = 0; j < SIZE; j++) {
        printf("%d,", arr[j]);
    }

    return 0;

}