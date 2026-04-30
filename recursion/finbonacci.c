#include <stdio.h>

/*
        0               if n = 0
fn =    1               if n = 1
        fn-1 + fn-2     if n > 1
*/

int fibonacci(int index) {
    if (index == 0) {
        return 0;
    }
    if (index == 1) {
        return 1;
    }

    return fibonacci(index - 1) + fibonacci(index - 2);
}


int main() {
    int index;
    int fibonacciOutput = 0;

    printf("Enter a number: \n");
    scanf("%d", &index);

    fibonacciOutput = fibonacci(index);

    printf("The fibonacci output of index %d is %d \n", index, fibonacciOutput);

    return 0;
}