#include <stdio.h>

int main() {
    //All are stored in the computer memeory as binary which means they all have a similar binary value in memory
    char myChar1 = 'a';
    char myChar2 = 97; //int reperesentation of 'a'
    char myChar3 = 0x61; //hex representation of 'a'

    printf("%c and %c and %c are equal\n", myChar1, myChar2, myChar3); //prints a and a and a are equal
    printf("%d and %c and %d are equal\n", myChar1, myChar2, myChar3); //prints 97 and 97 and 97 are equal
    printf("%X and %X and %X are equal\n", myChar1, myChar2, myChar3); //prints 61 and 61 and 61 are equal


    char myChar4 = 9;
    char myChar5 = '9';

    printf("%c and %c\n", myChar4, myChar5);
    printf("%X and %c\n", myChar4, myChar5);

}