#include <stdio.h>

/*
Write a program that reads from the user a "three-digit" integer value.
 The program should print "ASCENDING" if the three digits of the number are in ascending order (from left to right). 
 If not, the program should print "NOT ASCENDING".
*/

int main() {
    int value1, value2, value3;
    char *sorted = NULL;

    printf("Enter value one: ");
    scanf("%d", &value1);

    printf("Enter value two: ");
    scanf("%d", &value2);

    printf("Enter value three: ");
    scanf("%d", &value3);

    if (value1 < value2 && value2 < value3) {
        sorted = "Ascending";
    }else {
        sorted = "Not Ascending";
    }

    printf("%d and %d and %d are %s\n\n", value1, value2, value3, sorted);

    return 0;

}