#include <stdio.h>
int main()
{   char ch;
    FILE *source, *target;
    char src[] = "firozread.txt";
    char tar[] = "firozwrite.txt";
    source = fopen(src, "r");
    target = fopen(tar, "a+");

    for (int i = 0; i < 5; i++)
    { {
            while ((ch = fgetc(source)) != EOF)
            {
                if (source == NULL)
                {
                    printf("\n");
                }
                else
                    fputc(ch, target);
            }
        }

        source = fopen(src, "r");}

    fclose(source);
    fclose(target);
    return 0;}
