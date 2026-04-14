#include <stdio.h>

/*
Write a program that reads from the user 3 values of an "integer" type. 
The program should print "EQUAL" if all the values are equal. Otherwise, the program should print "NOT EQUAL".
*/

int main() {
    int value1, value2, value3;
    char *equality = NULL;

    printf("Enter value one: ");
    scanf("%d", &value1);

    printf("Enter value two: ");
    scanf("%d", &value2);

    printf("Enter value three: ");
    scanf("%d", &value3);

    if (value1 == value2 && value2 == value3) {
        equality = "Equal";
    }else{
        equality = "Not Equal";
        }

    printf("%d and %d and %d are %s\n\n", value1, value2, value3, equality);

    return 0;
}