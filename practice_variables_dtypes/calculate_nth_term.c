#include <stdio.h>

int main() {
    float difference, initialTerm;
    int nth;
    float nthTerm;

    printf("Please enter the difference in the arithmetic sequence here: ");
    scanf("%f", &difference);

    printf("Please enter the initial term here: ");
    scanf("%f", &initialTerm);

    printf("Please number of elements in the arithmetic sequence here: ");
    scanf("%d", &nth);

    nthTerm = initialTerm + ((nth -1) * difference);

    printf("The nth term is = %.1f\n", nthTerm);

    return 0;

}