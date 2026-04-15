#include <stdio.h>

//Print the absolute value

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The absolute of %d is = %d\n", number, number);
    }else{
        printf("The absolute of %d is = %d\n", number, number * -1);
    }

    return 0;
}