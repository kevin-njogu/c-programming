#include <stdio.h>

int main() {
    int grade, passMark = 60;
    printf("Enter your grade here: ");
    scanf("%d", &grade);

    if (grade >= passMark)
        printf("Congratulations, you passed !!!\n");
    else
        printf("Failed...Try again!!\n");
    
    return 0;
}