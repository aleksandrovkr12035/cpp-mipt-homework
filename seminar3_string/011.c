#include <stdio.h>

void safe_strcpy(char a[], size_t size, const char b[])
{
    size_t i = 0;

    while (i < size - 1 && b[i] != '\0')
    {
        a[i] = b[i];
        i++;
    }

    a[i] = '\0';
}

int main()
{
    char a[10] = "Mouse";
    char b[50] = "LargeElephant";

    safe_strcpy(a, 10, b);

    printf("%s\n", a);
}