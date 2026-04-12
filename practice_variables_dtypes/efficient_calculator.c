#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int x2, x4, x6, x8;

    printf("Enter a number: ");
    scanf("%d", &number);

    x2 = (int) pow(number, 2);
    x4 = (int) pow(number, 4);
    x6 = (int) pow(number, 6);
    x8 = (int) pow(number, 8);

    printf("%d to the power of 2 is = %d\n", number, x2);
    printf("%d to the power of 4 is = %d\n", number, x4);
    printf("%d to the power of 6 is = %d\n", number, x6);
    printf("%d to the power of 8 is = %d\n\n", number, x8);

    return 0;
}