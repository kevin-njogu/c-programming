#include <stdio.h>

int main() {
    int grade1 = 80, grade2 = 100;

    printf("Grade 1 is %d\n", grade1);
    printf("The address of grade 1 is %p\n", &grade1);

    printf("Grade 2 is %d\n", grade2);
    printf("The address of grade 2 is %p\n", &grade2);
}