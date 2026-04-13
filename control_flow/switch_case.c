#include <stdio.h>

/*
A - 90 -100
B - 80 - 89
C - 70 - 79
D - 60 - 69
F - 0  - 59
*/

int main() {
    char grade;
    printf("Enter your grade between (A-F): ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("Grade is between 90-100 \n");
            break;
        case 'B':
            printf("Grade is between 80-89 \n");
            break;
        case 'C':
            printf("Grade is between 70-79 \n");
            break;
        case 'D':
            printf("Grade is between 60-69 \n");
            break;
        case 'F':
            printf("Grade is between 0-59 \n");
            break;
        default:
            printf("The grade captured is invalid \n");
            break;
    }
    return 0;
}