#include <stdio.h>

int main() {
    float userInput;
    float outputDecimal;
    int outputInteger;

    printf("Please enter a floating point number here: ");
    scanf("%f", &userInput);

    outputDecimal = userInput - (int) userInput;
    outputInteger = (int) userInput;

    printf("The extracted integer part is = %d\n\n", outputInteger);
    printf("The extracted decimal part is = %.2f\n\n", outputDecimal);

    return 0;
}