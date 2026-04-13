#include <stdio.h>

int main() {
    float num1, num2;
    printf("Enter a floating point number: ");
    scanf("%f", &num1);

    printf("Enter a floating point number: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("%.2f is greater than %.2f\n", num1, num2);
    }else if (num2 > num1) {
        printf("%.2f is greater than %.2f\n", num2, num1);
    }else{
        printf("%.2f is equal to %.2f\n\n", num1, num2);
    }
    return 0;
}