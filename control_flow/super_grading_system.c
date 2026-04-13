#include <stdio.h>

int main() {
    int grade;

    printf("Enter your exam grade here: ");
    scanf("%d", &grade);

    if (grade >= 80) {
        printf("Excellent work\n\n");
    }else if (grade >= 60) {
        printf("Not bad!!\n\n");
    }else {
        printf("Oh...you failed\n\n");
    }

    return 0;
}