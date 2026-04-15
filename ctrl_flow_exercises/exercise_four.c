#include <stdio.h>

//find the quadrant of a point

int main() {
    int x, y;

    printf("Enter x coordinates: ");
    scanf("%d", &x);

    printf("Enter y coordinates: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("In the first quadrant\n");
    }else if (x < 0 && y > 0) {
        printf("In the second quadrant\n");
    }else if (x < 0 && y < 0) {
        printf("In the third quadrant\n");
    }else if (x > 0 && y < 0) {
        printf("In the fourth quadrant\n");
    }else if (x == 0 || y == 0) {
        printf("Point on x or y axis\n");
    }else{
        printf("It is the central point\n");
    }

    return 0;
}