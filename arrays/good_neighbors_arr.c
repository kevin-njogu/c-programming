#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE];
    int hasGoodNeighbor = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < SIZE; i++) {
        if ((arr[i-1] * arr[i]) == arr[i+1]) {
            hasGoodNeighbor = 1;
            break;
        }
    }

    if (hasGoodNeighbor == 1) {
         printf("This arr has good neighbors\n");
    }else {
        printf("This arr does not have a good neighbor\n");
    }

    return 0;
}