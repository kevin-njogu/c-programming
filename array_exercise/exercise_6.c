#include <stdio.h>
#define SIZE 4

int main() {

    int arr[SIZE] = {5,4,7,3};
    int num;

    for (int i = 0; i < SIZE; i++) {
        if(i == 0) {
            num = arr[i];
        }else {
            arr[i-1] = arr[i];
        }
    }

    arr[SIZE-1] = num;

    for (int j = 0; j < SIZE; j++) {
        printf("%d,", arr[j]);
    }

    return 0;
}