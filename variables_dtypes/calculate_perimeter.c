#include <stdio.h>

int main() {
    float length, width, perimeter;

    printf("Please enter the length: ");
    scanf("%f", &length);
    printf("The length is: %.2f\n\n", length);

    printf("Please enter the width: ");
    scanf("%f", &width);
    printf("The width is: %.2f\n\n", width);

    perimeter = 2 * (length+width);

    printf("The perimeter is: %.2f\n", perimeter);
    printf("Good bye !!\n\n");

    return 0;
}