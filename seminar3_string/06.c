#include <stdio.h>
#include <string.h>

int is_palindrom(char a[])
{
    int n = strlen(a);

    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
            return 0;
    }

    return 1;
}

int main()
{
    char a[100];
    scanf("%99s", a);

    if (is_palindrom(a))
        printf("Yes\n");
    else
        printf("No\n");
}