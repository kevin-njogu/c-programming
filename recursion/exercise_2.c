#include <stdio.h>

//Receives a character 
//Reads a sequence of characters from user untill user enters '$'
//counts the number of times the charcter received appears in the sequence entered

int countChars(char character) {
    char userInput;
    printf("Enter a character to compare here: ");
    scanf(" %c", &userInput);

    //This is the stopping bit is user enters '$'
    if (userInput == '$') {
        return 0;
    }

    //Add one to each recursion if the said character appears in the user input
    if (userInput == character) {
        return 1 + countChars(character);
    }

    //if the user input is some other charcter, ensure recursion continues
    return countChars(character);
}

int main() {
    char character;
    int count = 0;

    printf("Enter the character: ");
    scanf("%c", &character);

    count = countChars(character);

    printf("The total occurences of %c is %d\n", character, count);

    return 0;
}