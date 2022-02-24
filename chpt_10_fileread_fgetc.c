#include <stdio.h>
int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("chpt_10_fileread_fgetc.txt", "r");
    c = fgetc(ptr);          // means getc() can also be used to read the whole strings/text of the another
                                          // file character by character by using 'EOF' in while condition.  
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}