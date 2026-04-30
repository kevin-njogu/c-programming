#include <stdio.h>

//Receive a series of numbers from user up untill a user types -1
//Count all occurence of even numbers

int countOfEvenNums() {
    int num;
    printf("Enter the number here: ");
    scanf("%d", &num);

    if (num == -1) {
        return 0;
    }

    if ((num % 2) == 0) {
        return 1 + countOfEvenNums();
    }

    return countOfEvenNums();
}

int main() {
    int count;

    count = countOfEvenNums();
    printf("The count of occurences of even numbers in the sequence is: %d\n", count);

    return 0;
}