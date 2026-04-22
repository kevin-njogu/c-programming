#include <stdio.h>

int isEven(int num) {
    if (num <= 0) {
        return 0;
    }else {
        int result = num % 2 == 0 ? 1:0;
        return result;
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The result of is even is: %d\n", isEven(number));

    return 0;
}