#include <stdio.h>

char toLower(char letter) {
    
    if (letter >= 'A' && letter <= 'Z') {
        return letter - 'A' + 'a';
    }else {
        return -1;
    }
}

char toUpper(char letter) {
    if (letter >= 'a' && letter <= 'z') {
        return letter - 'a' + 'A';
    }else {
        return -1;
    }
}


int main() {
    char userChar;

    printf("Enter a char: ");
    scanf("%c", &userChar);

    if (userChar >= 'A' && userChar <= 'Z') {
        printf("The lower character is: %c\n", toLower(userChar));
    }else {
         printf("The lower character is: %c\n", toUpper(userChar));
    }
   
    return 0;

}