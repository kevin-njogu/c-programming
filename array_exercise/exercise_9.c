#include <stdio.h>
#define SIZE 6

int sumArray(int *pArr, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += pArr[i];
    }

    return sum;
}


int main() {
    int arr[SIZE];
    int sum;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter arr element for location %d: ", i);
        scanf("%d", &arr[i]);
    }

    sum = sumArray(arr, SIZE);

    printf("The tatal summation of the array elements is: %d\n", sum);

    return 0;
}