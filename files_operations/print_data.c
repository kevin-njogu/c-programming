#include <stdio.h>

void print_data(const char *filename, const char *operation)
{
    FILE *filePtr;
    int num = 5;

    filePtr = fopen(filename, "w");

    if (filePtr == NULL)
        printf("Failed to open file\n");
    else
    {
        fprintf(filePtr, "%d", num);
        fclose(filePtr);
    }
}
