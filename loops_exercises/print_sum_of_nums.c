#include <stdio.h>

int main() {
    int num;
    int solution = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        solution += i;
    }

    printf("The sum of all numbers from 1 to %d is %d\n", num, solution);

    return 0;
}