#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (day <= 0 || day > 31 || month <= 0 || month > 12 || year <= 0) {
        printf("Invalid input captured\n");
        return 0;
    }

    switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (day < 31) {
                day++;
            }else{
                day = 1;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day < 30) {
                day++;
            }else{
                day = 1;
            }
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 > 0) || (year % 100 == 0 && year % 400 == 0)) {
                if (day >= 29) {
                    day = 1;
                    month++;
                }
            }else {
                if (day >= 28) {
                    day = 1;
                    month++;
                }else{
                    day++;
                }    
            }
            break;
        case 12:
            if (day < 31) {
                day++;
            }else{
                day = 1;
                month = 1;
                year++;
            }
            break;
        default:
            printf("Invalid input\n");
            break;
        }

    printf("The next day is = %d - %d - %d\n\n", day, month, year);
    
    return 0;
}