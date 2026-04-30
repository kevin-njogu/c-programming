#include <stdio.h>

//Receive  an integer "num"
//Read a sequence of numbers from user up until "-1"
//Return the total numbers smaller than "num"

int countDigitsLessThanNum(int num) {
    int userInput;
    printf("Enter a number to compare: ");
    scanf("%d", &userInput);

    if (userInput == -1) {
        return 0;
    }

    if (userInput < num) {
        return 1 + countDigitsLessThanNum(num);
    }
    return countDigitsLessThanNum(num);
}


int main() {
    int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    count = countDigitsLessThanNum(num);

    printf("The total count is %d\n", count);

    return 0;
}