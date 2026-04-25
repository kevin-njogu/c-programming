#include <stdio.h>

int main() {
    int num1 = 5, num2 = 7;
    int *prtA, *prtB;

    printf("num1 = %d , num2 = %d\n", num1, num2);
    prtA = &num1; //memory location
    prtB = &num2; //memory location
    printf("prtA = %p , prtB = %p\n", prtA, prtB);


    *prtA = *prtA + 1;
    *prtB = *prtB + 3;
    printf("Num1 = %d , Num2 = %d\n", num1, num2);
    printf("prtA = %p , prtB = %p\n", prtA, prtB);


    prtA = prtB;
    prtB = prtA;
    printf("prtA = %p , prtB = %p\n", prtA, prtB);
    printf("Num1 = %d , Num2 = %d\n", num1, num2);
    printf("*prtA = %d , *prtB = %d\n", *prtA, *prtB);

    
    num1 = *prtB;
    num2 = num1 -3;
    printf("Num1 = %d , Num2 = %d\n", num1, num2);

    return 0;
}