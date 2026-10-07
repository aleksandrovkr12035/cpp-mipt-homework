#include <stdio.h>

int main()
{
    char a[100];
    scanf("%99s", a);

    int sum = 0;
    int i = 0;

    while (a[i] != '\0')
    {
        sum += a[i] - '0';
        i++;
    }

    printf("%i\n", sum);
}