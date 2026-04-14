#include <stdio.h>

/*
Write a program that reads from the user 2 values of an "integer" type. 
The program should print "EQUAL" if both the values are equal. Otherwise, the program should print "NOT EQUAL".
*/

int main() {
    int value1, value2;

    printf("Enter value one: ");
    scanf("%d", &value1);

    printf("Enter value two: ");
    scanf("%d", &value2);

    const char *equality = value1 == value2 ? "Equal": "Not Equal";

    printf("%d is %s to %d.\n\n", value1, equality, value2);

    return 0;
}