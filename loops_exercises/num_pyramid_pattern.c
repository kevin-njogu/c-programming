#include <stdio.h>

int main() {
    int num;
    int blankSpace;
    int currentValue = 1;

    printf("Enter number of rows of the pyramid: ");
    scanf("%d", &num);

    blankSpace = num - 1;

    for (int i = 1; i <= num; i++) {

        for (int k = blankSpace; k >= 1; k--) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", currentValue);
            currentValue += 1;
        }
        printf("\n");
        blankSpace--;
    }
    
    return 0;
}