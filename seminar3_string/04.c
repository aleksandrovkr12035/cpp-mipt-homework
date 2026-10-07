#include <stdio.h>

int main()
{
    char a[100];
    char b[100];

    if (scanf("%99s", a) != 1 || scanf("%99s", b) != 1)
        return 1;

    int i = 0;
    int j = 0;

    while (a[i] != '\0' || b[j] != '\0')
    {
        if (a[i] != '\0')
        {
            printf("%c", a[i]);
            i++;
        }

        if (b[j] != '\0')
        {
            printf("%c", b[j]);
            j++;
        }
    }

    printf("\n");
    return 0;
}