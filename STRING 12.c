#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[200];
    int i, a = 0, e = 0, in = 0, o = 0, u = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        switch (tolower((unsigned char)str[i]))
        {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': in++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    printf("a = %d\n", a);
    printf("e = %d\n", e);
    printf("i = %d\n", in);
    printf("o = %d\n", o);
    printf("u = %d\n", u);

    return 0;
}
