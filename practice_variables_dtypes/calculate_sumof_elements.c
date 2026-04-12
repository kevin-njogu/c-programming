#include <stdio.h>

int main() {
    float initialElement, nthElement, sumOfElements;
    int numberOfElements;

    printf("Enter the initial / first element here: ");
    scanf("%f", &initialElement);

    printf("Enter the last element here: ");
    scanf("%f", &nthElement);

    printf("Enter the number of elements here: ");
    scanf("%d", &numberOfElements);

    sumOfElements = (initialElement + nthElement) * numberOfElements / 2;

    printf("The sum total of all elements is = %.1f\n\n", sumOfElements);

    return 0;

}