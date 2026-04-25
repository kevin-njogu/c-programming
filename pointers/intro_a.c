#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    printf("%d\n", a);//The number 5
    printf("%p\n", &a);//The memory location
    printf("%p\n", p);//The memory location
    printf("%d\n", *p);//The number 5

    return 0;
}