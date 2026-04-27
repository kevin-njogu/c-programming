#include <stdio.h>
#include <string.h>

char *strcp(char *destination, char *source) {
    char *tempPtr;
    tempPtr = destination;
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    return tempPtr;
}

int main () {
    char myName[12] = "Kevin Njogu";
    char nameCopy[12];
    char *tempResult;

    tempResult = strcp(nameCopy, myName);

    printf("The new copied string is %s\n", tempResult);

    return 0;

}