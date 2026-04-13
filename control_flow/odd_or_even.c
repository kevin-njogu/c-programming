#include <stdio.h>

int main() {
    int num;
    printf("Enter a number here: ");
    scanf("%d", &num);

    if ((num % 2) != 0) {
        printf("%d is an odd number\n", num);
    }else{
        printf("%d is an even number\n\n", num);
    }

    return 0;
}