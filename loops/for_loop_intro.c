#include <stdio.h>
#include <time.h>

int main() {
    int userInput;
    clock_t start, end;
    double timeTaken;

    printf("Enter a number: ");
    scanf("%d", &userInput);

    start = clock();
    for(int i = 1; i <= userInput; i++) {
        // printf("%d\n", i);
    }

    end = clock();

    timeTaken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Execution time: %f seconds\n", timeTaken);
    printf("Execution time: %f milliseconds\n", timeTaken * 1000);

    return 0;
}

