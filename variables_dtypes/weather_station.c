#include <stdio.h>

/*
-Part one
    1.This program get the temperature from user in celcius degrees and converts to fahrenheit degrees
    2.The user input is a double
    3.The formula is F = C * 1.8 + 32

-Part Two
    1.This program get the temperature from user in fahrenheit degrees and converts to celcius degrees
    2.The user input is a double
    3.The formula is C = (F - 32) / 1.8
*/

int main() {
    double temperature, celcius, fahrenheit;

    printf("Enter temperature in celcius degrees: ");
    scanf("%lf", &temperature);
    fahrenheit = (temperature * 1.8) + 32;
    printf("Degrees in fahrenheit are: %.2lf\n\n", fahrenheit);


    printf("Enter temperature in fahrenheit degrees: ");
    scanf("%lf", &temperature);
    celcius = (temperature - 32) / 1.8;
    printf("Degrees in celcius are: %.2lf\n\n", celcius);


    return 0;
}
