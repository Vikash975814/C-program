#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE * file;
    char ch;
    int characters, words, lines;
    file = fopen("test.txt", "r");
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        if (ch == '\n' || ch == '\0')
            lines++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }
    if (characters > 0) {
        words++;
        lines++;
    }
printf("\n");
printf("Total characters = %d\n", characters);
printf("Total words      = %d\n", words);
printf("Total lines      = %d\n", lines);
fclose(file);
getch();
}
