#include <stdio.h>

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        }
    }

    return 0;
}