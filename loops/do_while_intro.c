#include <stdio.h>

int main() {
    int grade;

    do{
        printf("Enter the grade: ");
        scanf("%d", &grade);
    }while (grade < 0 || grade > 100);

    printf("Thank you for entering a legit grade of: %d\n\n", grade);
    
    return 0;
}