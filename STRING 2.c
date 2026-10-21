#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
        str[i] = tolower((unsigned char)str[i]);

    printf("Lowercase: %s", str);
    return 0;
}
