#include <stdio.h>

float calculateArea(float height, float width) {
    return height * width;
}

int main() {
    float height, width;

    printf("Enter the height and width below: \n");
    scanf("%f%f", &height, &width);

    float area = calculateArea(height, width);
    printf("The area of the rectangle is %.2f\n", area);

    return 0;
}