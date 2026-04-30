#include <stdio.h>


int pellNums(int idx) {
    if (idx == 0) {
        return 0;
    }

    if (idx == 1) {
        return 1;
    }

    return 2 *pellNums(idx - 1) + pellNums(idx -2);
}


int main() {
    int idx;
    int pell;

    printf("Enter the index: ");
    scanf("%d", &idx);

    pell = pellNums(idx);

    printf("The pell number for index %d is %d\n", idx, pell);

    return 0;
}