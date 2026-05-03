#include <stdio.h>
#include "exercise_three.h"

void read_number(const char *filename, const char *operation)
{
    FILE *file;
    int num, num1;

    file = fopen(filename, operation);

    if (file == NULL)
        printf("Failed to read file");
    else
    {
        /*while (!feof(file))
        {
            fscanf(file, "%d", &num);
            printf("Printing num %d\n", num);
        }*/
        for (int i = 1; i <= 10; i++) {
            fscanf(file, "%d%d", &num, &num1);
            printf("Printing num %d %d\n", num, num1);
        }
        fclose(file);
    }
}
