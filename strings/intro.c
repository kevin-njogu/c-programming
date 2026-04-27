#include <stdio.h>
#include <stdlib.h>

int main() {
    char firstName[] = "Kevin";
    char lastName[8] = "Muriuki"; //using the size of 8 to accomodate the \0 character at the end of the string
    printf("Your fullname is: %s %s\n", firstName, lastName);


    char fullName[] = "Brad Pitt";
    int i = 0;
    while(fullName[i] != '\0') {
        printf("%c", fullName[i]);
        i++;
    }

    return 0;
}