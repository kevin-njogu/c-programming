#include <stdio.h>

int main() {
    int number, pow;
    int solution = 1;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the power: ");
    scanf("%d", &pow);

    for (int i = pow; i > 0; i--) {
        solution = solution * number;
    }

    printf("Solution is %d\n", solution);

    return 0;
}