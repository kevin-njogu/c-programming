#include <stdio.h>

int main() {
    double hourlySalary, totalHoursWorked, totalSalary;

    printf("Enter the hourly salary as per your contract: ");
    scanf("%lf", &hourlySalary);

    printf("Enter the total number of hours worked in the month: ");
    scanf("%lf", &totalHoursWorked);

    totalSalary = hourlySalary * totalHoursWorked;

    printf("The total salary due is = %.2lf\n\n", totalSalary);

    return 0;
}