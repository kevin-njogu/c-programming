#include <stdio.h>

int positionFinder(int num) {
    int position = 0;

    if (num < 10) {
        if (position > 0) {
            position++;
        }
        if (((position % 2 == 0) && (num % 10 % 2 == 0)) || ((position % 2 != 0) && (num % 10 % 2 != 0))) {
            return 1;
        }else {
            return 0;
        }
    }

    if (((position % 2 == 0) && (num % 10 % 2 == 0)) || ((position % 2 != 0) && (num % 10 % 2 != 0))) {
        return 1;
    }else {
         return 0;
    }

    printf("Position %d: %d", position, num % 10);

    position++;
    return positionFinder(num / 10);
}

int main() {
    int num = 665438;
    int output;

    output = positionFinder(num);

    printf("The output is %d\n", output);

    return 0;
}