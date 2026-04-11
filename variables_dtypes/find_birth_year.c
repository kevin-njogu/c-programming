#include <stdio.h>

int main() {
    int currentYear;
    int currentAge;
    int birthYear;
    
    printf("Welcome to age calcuation INC..\n\n");
    
    printf("Please enter the current year below:\n");
    scanf("%d", &currentYear);
    printf("The current year is %d\n\n", currentYear);

    printf("Please enter your current age below:\n");
    scanf("%d", &currentAge);
    printf("Your current age is %d\n\n", currentAge);

    birthYear = currentYear - currentAge;

    printf("Your year of birth is %d\n", birthYear);
    printf("Good bye for now !!\n\n");

    return 0;
}