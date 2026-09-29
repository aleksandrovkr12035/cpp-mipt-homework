#include <stdio.h>

void print_binary(int a)
{
    int b;

    if (a == 0)
    {
        printf("0");
    }
    else if (a == 1)
    {
        printf("1");
    }
    else
    {
        b = a % 2;
        print_binary(a / 2);
        printf("%i", b);
    }
}

int main()
{
    print_binary(6);
    printf("\n");

    print_binary(128);
    printf("\n");

    print_binary(4823564);
    printf("\n");

    print_binary(0);
    printf("\n");

    return 0;
}