#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    int x = a;

    while (x % c != 0)
    {
        x = x + 1;
    }

    for (int i = x; i <= b; i += c)
    {
        printf("%i ", i);
    }

    printf("\n");
}