#include <stdio.h>

void print_even(int a, int b)
{
    int i;

    i = a;

    while (i <= b)
    {
        if (i % 2 == 0)
        {
            printf("%i ", i);
        }

        i = i + 1;
    }

    printf("\n");
}

int main()
{
    print_even(2, 15);
    print_even(1, 15);
    print_even(-7, 3);

    return 0;
}