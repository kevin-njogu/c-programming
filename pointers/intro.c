#include <stdio.h>

int swap(int a, int b) {

    //printf("Before swap a is = %d\n", a);
    //printf("Before swap b is = %d\n", b);

    int temp = a;
    a = b;
    b = temp;

    //printf("After swap a is = %d\n", a);
    //printf("After swap b is = %d\n", b);
}


int main() {
    int a, b;

    printf("Enter the numbers below: \n");
    scanf("%d%d", &a, &b);

    printf("Before swap a is = %d\n", a);
    printf("Before swap b is = %d\n", b);

    swap(a, b);

    printf("After swap a is = %d\n", a);
    printf("After swap b is = %d\n", b);

    return 0;
}