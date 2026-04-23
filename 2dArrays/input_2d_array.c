#include <stdio.h>

int main() {
    int myArr[3][2] = {{2}, {5,8}, {10,22}};

    myArr[0][1] = 16;
    myArr[2][1] = 17;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Arr item: %d\n", myArr[i][j]);
        }
    }

    return 0;
}