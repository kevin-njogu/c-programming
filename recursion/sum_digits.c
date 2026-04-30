#include <stdio.h>

//add all numbers in a digits in a number


int sumDigits(int number) { 
    if ((number % 10) == number) {
        return number;
    }

    //add the right digit and the divide by 10 to get the left numbers
    return number % 10 + sumDigits(number / 10); 
}


int main() {
    int num = 9217;
    int output = sumDigits(num);
    printf("The sum of all the digits of %d is %d\n", num, output);
    return 0;
}