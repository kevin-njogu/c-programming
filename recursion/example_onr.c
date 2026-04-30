#include <stdio.h>

//find the sum of N numbers

int sumUpTo(int num) {
    //when num gets to 1, the sum of all numbers up to 1 will always be 1 hence it should just return 1
    if (num == 1) {
        return num;
    }
    return num + sumUpTo(num-1);
    /*
    if user enters 5 as the parameter
    1. 5 + sumUpTo(4)
    2. 4 + sumUpTo(3)
    3. 3 + sumUpTo(2)
    4. 2 + sumUpTo(1)
    5. it will return 1 hence num will be one and it will be propagated upwards

    5. 1
    4. 2 + 1 = 3
    3. 3 + 3 = 6
    4. 4 + 6 = 10
    5. 5 + 10 = 15
    */
}


int main() {
    int num;
    int total = 0;

    printf("Please enter an number: ");
    scanf("%d", &num);

    total = sumUpTo(num);

    printf("The sum of numbers up to %d is %d\n", num, total);

    return 0;
}