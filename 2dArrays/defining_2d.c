#include <stdio.h>

int main() {
    int arrA[2][3] = {{1,2,3},{4,5,6}};
    int arrB[4][4] = {{1},{2,3},{4,6,7,8},{9,10,11}};
    int arrC[2][3] = {1,2,3,5,6,7};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {      
            printf("Array A: %d\n", arrA[i][j]);      
        }
    }

    printf("**********\n\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {      
            printf("Array B: %d\n", arrB[i][j]);      
        }
    }

    printf("**********\n\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {      
            printf("Array C: %d\n", arrC[i][j]);      
        }
    }

    return 0;
}