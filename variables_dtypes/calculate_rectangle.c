#include <stdio.h>

int main() {
    double height, width, area;
    // double width;
    // double area;

    printf("Welcome to the mathematical lab ...\n\n");

    printf("Please enter the height of the rectangle below:\n");
    scanf("%lf", &height);
    printf("The height is %lf\n\n", height);

    printf("Please enter the width of the rectangle below:\n");
    scanf("%lf", &width);
    printf("The width entered is %lf\n\n", width);

    area = height * width;

    printf("The area of the rectangle is %lf: \n", area);
    printf("Good bye !!\n\n");

    return 0;
}