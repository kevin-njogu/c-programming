#include <stdio.h>

//check if a number received from the user is a double or triple digit number

int main() {
    int digit;

    printf("Enter a number: ");
    scanf("%d", &digit);

    if (digit >= 100 && digit <= 999) {
        printf("Triple digit\n");
    }else if (digit >= 10 && digit <= 99) {
        printf("Double digit\n");
    }else {
        printf("Nether double or triple\n");
    }

    return 0;
}