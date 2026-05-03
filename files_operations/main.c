#include <stdio.h>
#include <stdlib.h>
#include "read_char.h"
#include "create_empty_file.h"
#include "write_char.h"
#include "print_data.h"
#include "scan_data.h"
#include "write_str.h"
#include "read_str.h"
#include "exercise_one.h"
#include "exercise_two.h"
#include "exercise_three.h"
#include "exercise_four.h"
#include "exercise_five.h"

//Working with files
//Creating a file
int main()
{
    char filename[] = "c:/users/kevin/Documents/myfile.txt";
    char filename1[] = "c:/users/kevin/Documents/myfile1.txt";
    char readOperation[] = "r";
    char writeOperation[] = "w";

    //1. Create a pointer that points to the FILE struct
    FILE *file;

    create_file(filename, writeOperation);

    write_char(filename, writeOperation);

    read_char(filename, readOperation);

    print_data(filename, writeOperation);

    scan_data(filename, readOperation);

    write_str(filename, writeOperation);

    get_str(filename, readOperation);

    count_chars(filename, readOperation);

    add_powers(filename, writeOperation);

    read_number(filename, readOperation);

    count_occurence(filename1, readOperation);

    get_occurrences(filename1, readOperation);

    return 0;
}
