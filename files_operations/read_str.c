#include <stdio.h>
#define SIZE 24

void get_str(const char *filename, const char *operation)
{
    char mystr[SIZE];
    FILE *filePtr;

    filePtr = fopen(filename, operation);

    if (filePtr == NULL)
        printf("Failed to open file\n");
    else
    {
        fgets(mystr, SIZE, filePtr);
        puts(mystr);
        fclose(filePtr);
    }
}
