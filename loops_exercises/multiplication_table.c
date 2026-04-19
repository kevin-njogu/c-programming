#include <stdio.h>

int main() {
    int number, multiplier, output;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the multiplier: ");
    scanf("%d", &multiplier);

    for (int i = 1; i <= multiplier; i++) {
        output = number * i;
        printf("%d. %d * %d = %d\n", i, number, i, output);
    }
    return 0;
}