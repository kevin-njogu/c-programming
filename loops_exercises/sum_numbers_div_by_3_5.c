#include <stdio.h>

int main() {
    int sum = 0;
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--) {
        if ((i % 3 == 0) && (i % 5 == 0)) {
            printf("%d is divisible\n", i);
            sum += i;
        }
    }
    printf("The sum is: %d\n", sum);
    return 0;
}