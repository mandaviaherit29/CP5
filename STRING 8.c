#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    j = (int)strlen(str) - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (palindrome)
        printf("It is a palindrome.");
    else
        printf("It is not a palindrome.");

    return 0;
}
