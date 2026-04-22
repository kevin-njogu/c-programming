#include <stdio.h>

int sumDivisors(int number) {
    int sum = 0;
    int result, previousNum = 0;
    if(number <= 0) {
        return 0;
    }else {
        for (int i = 1; i <= 9; i++) {
            if (number % i != 0) {
                continue;
            }else {
                if (previousNum == i) {
                    break;
                }else {
                    sum += i;
                    sum += number / i;
                }
                previousNum = number / i;
            }
        }
        return sum;
    }
}


int perfectNumber(int number) {
    int sum = sumDivisors(number);

    //Find a perfect number - a number which is equal to sum of all its divisors less itself.
    if(number == (sum - number)) {
        return 1;
    }else {
        return 0;
    }

}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of all divisors of %d is = %d\n", num, sumDivisors(num));

    printf("Is the number %d a perfect number ?? %d\n", num, perfectNumber(num));

    return 0;
}