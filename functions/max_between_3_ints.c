#include <stdio.h>

int findMax(int num1, int num2, int num3) {
    if (num1 > num2 && num2 > num3) {
        return num1;
    }else if (num2 > num3) {
        return num2;
    }else {
        return num3;
    }
}

int main() {
    int value1, value2, value3;

    printf("Enter value1, value2 and value3: \n");
    scanf("%d%d%d", &value1, &value2, &value3);

    printf("The maximum value is %d\n", findMax(value1, value2, value3));

    return 0;
}