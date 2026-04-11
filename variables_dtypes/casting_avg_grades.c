#include <stdio.h>

//Take three grades from the user and calculate their exact average
int main() {
    int grade1, grade2, grade3;
    double averageGrade;

    printf("Welcome to avg grade calculator...\n\n");

    printf("Enter the first grade: ");
    scanf("%d", &grade1);

    printf("Enter the second grade: ");
    scanf("%d", &grade2);

    printf("Enter the third grade: ");
    scanf("%d", &grade3);

    averageGrade = (grade1 + grade2 + grade3) / (double) 3;

    printf("Your average grade is:  %.2lf\n", averageGrade);
    printf("Good bye !!1 \n\n");

    return 0;
}