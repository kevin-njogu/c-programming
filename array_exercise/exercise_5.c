#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE] = {1, 3, 4, 2, 3};
    int count = 0;
    int foundDuplicate = 0;
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if(i == j) {
                continue;
            }else {
                if(arr[i] == arr[j]) {
                    foundDuplicate = 1;
                }
            }
        }
        if (foundDuplicate != 1) {
            printf("Unique number %d\n", arr[i]);
            count++;
        }
        foundDuplicate = 0;
        
    }

    printf("The total number of repeated items is %d\n", count);

    return 0;
}