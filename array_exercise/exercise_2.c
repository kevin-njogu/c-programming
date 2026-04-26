#include <stdio.h>
#define SIZE 6

//check if an array is a palindrome

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 2, 1};
    int num1 = arr[0];
    int num2 = arr[SIZE-1];

    for (int i = 1; i < SIZE; i++) {
        num1 = (num1 * 10) + arr[i];
    }
    printf("The number one is %d\n", num1);


    for (int i = (SIZE - 2); i >= 0; i--) {
        num2 = (num2 * 10) + arr[i];
    }
    printf("The number two is %d\n", num2);


    if (num1 == num2) {
        printf("The array is a palindrome\n");
    }else {
        printf("The array is not palindrome\n");
    }

    return 0;
}