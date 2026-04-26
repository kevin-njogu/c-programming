#include <stdio.h>
#define SIZE 3

//copy one array to another

int main() {
    int date[SIZE] = {25, 4, 2026};
    int (*ptr)[SIZE] = &date;
    int newDate[SIZE];

    for (int i = 0; i < SIZE; i++) {
        newDate[i] = (*ptr)[i];
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d-", date[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d-", newDate[i]);
    }

    return 0;
}