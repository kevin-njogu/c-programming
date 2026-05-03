#include <stdio.h>

void count_chars(const char *filename, const char *operation)
{
    FILE *file;
    int totalChars = 0;
    int countLines = 0;
    char mychar;

    file = fopen(filename, operation);

    if (file == NULL)
        printf("Failed to open file \n");
    else
    {
        while ((mychar = fgetc(file)) != EOF)
        {
            printf("The current char is %c\n", mychar);
            totalChars++;
            if (mychar == '\n')
                countLines++;
        }
        fclose(file);
    }
    printf("The total number of characters is %d\n", totalChars);
    printf("The total number of lines is %d\n", countLines);
}
