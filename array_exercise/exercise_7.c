#include <stdio.h>
#define SIZE 4
#define ROTATION 3

int main() {

    int arr[SIZE] = {5,4,7,3};
    int num = arr[0]; //3

    //Repeat rotation by one, for the number of ROTATIONS provided
    for (int j = 0; j < ROTATION; j++) {

        for (int i = 0; i < SIZE; i++) {
            if(i == 0) {
                num = arr[i];
            }else {
                arr[i-1] = arr[i];
            }
        }

        arr[SIZE-1] = num;
    }



    for (int k = 0; k < SIZE; k++) {
        printf("%d,", arr[k]);
    }

    return 0;
}