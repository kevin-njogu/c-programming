#include <stdio.h>

int main() {
    //The output here will be 2.0000
    int num1 = 5, num2 = 2;
    double result;
    result = num1 / num2;
    printf("The result is = %lf\n\n", result);


    //With casting, the output here will be 2.5000 as it should - casting is done like (int) 2.5 - cast to int
    int num3 = 5, num4 = 2;
    double result1;
    result1 = (double) num1 / (double) num2;
    printf("The result is = %lf\n\n", result1);

    return 0;
}