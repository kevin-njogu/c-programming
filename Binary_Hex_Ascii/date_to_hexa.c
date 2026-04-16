#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter day of month: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("The date in hexadecimal is 0x%X - 0x%X - 0x%X \n\n", day, month, year);

    int my_hex = 0xdc;

    printf("%c", my_hex);

    return 0;
}