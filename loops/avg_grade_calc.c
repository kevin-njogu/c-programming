#include <stdio.h>

int main() {
    int courses = 3;
    int grade;
    int totalMarks = 0;
    float avg;
    int tempCourses = courses;

    while (courses > -1) {
        printf("Enter the grade: ");
        scanf("%d", &grade);
        printf("The total marks before is %d\n\n", totalMarks);
        totalMarks += grade;
        printf("The total marks after is %d\n\n", totalMarks);
        courses -= 1;
    }

    avg = totalMarks / (tempCourses + 1);
    printf("The total marks is %d\n\n", totalMarks);
    printf("The average marks achieved was: %.2f\n\n", avg);
}