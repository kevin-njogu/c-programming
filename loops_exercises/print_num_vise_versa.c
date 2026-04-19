#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("%d, ", i);
    }
    printf("\n");

    for (int i = num; i >= 1; i--) {
        printf("%d, ", i);
    }
    printf("\n");

    return 0;
}