#include <stdio.h>

int strLen(char *pStr) {
    int len = 0;
    while(pStr[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[7];
    fgets(str, 7, stdin);

    printf("The length of the string is: %d\n", strLen(str));

    return 0;

}