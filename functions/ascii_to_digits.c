#include <stdio.h>

int charConverter(char firstChar, char secondChar, char thirdChar) {
    int hundreds, tens, ones;
    int finalResult;

    if (firstChar >= '0' && firstChar <= '9') {
        hundreds = firstChar - '0';
    } else {
        return 0;
    }

    if (secondChar >= '0' && secondChar <= '9') {
        tens = secondChar - '0';
    } else {
        return 0;
    }

    if (thirdChar >= '0' && thirdChar <= '9') {
        ones = thirdChar - '0';
    }else {
        return 0;
    }

    finalResult = (hundreds * 100) + (tens * 10) + (ones * 1);

    return finalResult;
}


int main() {
    char value1, value2, value3;

    printf("Please enter a character below:");
    scanf("%c", &value1);

    printf("Please enter a character below:"); 
    scanf(" %c", &value2); //the space before %c tells scanf to skip all whitelines including newlines which might be mis-interpreted as characters

    printf("Please enter a character below:");
    scanf(" %c", &value3); //the space before %c tells scanf to skip all whitelines including newlines which might be mis-interpreted as characters


    printf("The final output is: %d\n", charConverter(value1, value2, value3));

    return 0;
}