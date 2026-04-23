#include <stdio.h>
#define SIZE 10

int main() {
    int pullUpArr[SIZE] = {3,4,3,5,7,8,6,9,8,10};

    for (int i = SIZE-1; i >= 0; i--) {
        printf("%d, ",pullUpArr[i]);
    }

    return 0;
}