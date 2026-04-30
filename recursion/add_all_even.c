#include <stdio.h>

//Receive a series of numbers from user up untill a user types -1
//Sum all occurence of even numbers

int sumOfEvenNumbers() {
    int num;

    printf("Enter the number here: ");
    scanf("%d", &num);

    if (num == -1) {
        return 0;
    }

    if (num % 2 == 0) {
        return num + sumOfEvenNumbers();
    }

    return sumOfEvenNumbers();
}

int main() {
    int sumEvenNums;
    sumEvenNums = sumOfEvenNumbers();

    printf("The sum of all even numbers in the sequence is %d\n", sumEvenNums);
    return 0;
}