#include <stdio.h>
#include <math.h>

/*
- points (x1, y1) and (x2, y2)
- calculating distance = sqrt ((x1-x2)^2 + (y1-y2)^2)
*/

int main() {
    double x1, y1, x2, y2, distance;

    printf("Enter X1: ");
    scanf("%lf", &x1);

    printf("Enter Y1: ");
    scanf("%lf", &y1);

    printf("Enter X2: ");
    scanf("%lf", &x2);

    printf("Enter Y2: ");
    scanf("%lf", &y2);

    distance = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));

    printf("The distance between the two points is: %lf\n\n", distance);

    return 0;
}