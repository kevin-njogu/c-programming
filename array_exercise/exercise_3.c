#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE] = {5, 7, 1, 5, 2};
    int sum = 0, previousSum = 0;

    for (int i = 0; i < SIZE; i++) {
        if ((i + 1) > (SIZE - 1)) {
            break;
        } else {
            if ((arr[i] + arr[i+1]) > previousSum) {
                sum = arr[i] + arr[i+1];
                previousSum = sum;
            }else {
                sum = previousSum;
            }
        }
    }

    printf("The largest sum of adjacent numbers is: %d\n", sum);

    return 0;
}