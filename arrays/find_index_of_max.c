#include <stdio.h>
#define SIZE 10

int main() {
    int tel[SIZE];
    int indexOfMax = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter a phone number digit for location %d: ", i+1);
        scanf("%d", &tel[i]);
    }

    for (int i = 1; i < SIZE; i++) {
        if (tel[i] > tel[indexOfMax]) {
            indexOfMax = i;
        }
    }

    printf("The index of the max digit is %d\n", indexOfMax);

    return 0;
}