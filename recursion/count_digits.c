#include <stdio.h>

//Count all digits in the number

int countDigits(int num) {
    if (num < 10) {
        return 1;
    }
   
    return 1 + countDigits(num / 10);
}


int main() {
    int num = 9532;
    int totalDigits = 0;

    totalDigits = countDigits(num);
    printf("The total digits are %d\n", totalDigits);

    return 0;
}
