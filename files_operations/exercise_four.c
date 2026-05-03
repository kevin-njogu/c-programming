#include <stdio.h>

void count_occurence(const char *filename, const char *operation)
{
    char mychar, check_char = 'l';
    int countChar = 0;
    FILE *file;

    file = fopen(filename, operation);

    if (file == NULL)
        printf("Failed to open file\n");
    else
    {
        while ((mychar = fgetc(file)) != EOF)
        {
            if (mychar == check_char)
            {
                countChar++;
            }
        }
        fclose(file);
    }
    printf("Character %c appears %d in the file\n", check_char, countChar);
}
