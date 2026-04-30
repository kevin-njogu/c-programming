#include <stdio.h>

//Recurssive function that receives an number
//Print all numbers form 1 to n

void printNumsOneToN(int num) {

    if (num >= 1) {
        printNumsOneToN(num - 1);
        printf("%d,", num);
    }
}

void printNumsNToOne(int num) {

    if (num >= 1) {
        printf("%d,", num);
        printNumsNToOne(num - 1);    
    }
}



int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("All the numbers from 1 to %d are\n", num);
    printNumsOneToN(num);

    printf("All the numbers from %d to 1 are\n", num);
    printNumsNToOne(num);

    return 0;
}