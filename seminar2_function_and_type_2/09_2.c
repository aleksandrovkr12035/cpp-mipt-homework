#include <stdio.h>

void bob(int n);

void alice(int n)
{
    int a;

    a = n * 3 + 1;

    printf("Alice: %i\n", a);

    bob(a);
}

void bob(int n)
{
    int a;

    if (n == 1)
    {
        printf("Bob: 1\n");
    }
    else if (n % 2 == 0)
    {
        a = n / 2;
        printf("Bob: %i\n", a);
        bob(a);
    }
    else
    {
        printf("Bob: %i\n", n);
        alice(n);
    }
}

int main()
{
    int n;

    n = 13;

    alice(n);

    return 0;
}