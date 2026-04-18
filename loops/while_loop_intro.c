#include <stdio.h>

int main() {
    int count = 0, userInput;


    printf("Enter the number of asterisks: ");
    scanf("%d", &userInput);

    while (count <= userInput) {
        printf("%d - *\n", count);
        count += 1;
    }

    return 0;
}