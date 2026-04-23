#include <stdio.h>
#define SIZE 5

int main() {
    int grades[SIZE];
    int lowestGrade;

    for (int i = 0; i < SIZE; i++) {
        printf("Please enter a grade for location %d: ", i);
        scanf("%d", &grades[i]);
    }

    lowestGrade = grades[0];

    for (int i = 1; i < SIZE; i++) {
        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
        }
    }
    printf("The lowest grade entered is: %d\n", lowestGrade);

    //printf("Your array grades are %d\n", grades); --> prints the address of an array in memory

    return 0;
}