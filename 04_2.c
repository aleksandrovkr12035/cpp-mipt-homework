#include <stdio.h>

int sum_of_digits(int a)
{
    int b;
    int c;

    b = 0;

    while (a > 0)
    {
        c = a % 10;
        b = b + c;
        a = a / 10;
    }

    return b;
}

int sum_of_digits_rec(int a)
{
    int b;
    int c;

    if (a == 0)
    {
        c = 0;
    }
    else
    {
        b = a % 10;
        c = b + sum_of_digits_rec(a / 10);
    }

    return c;
}

int main()
{
    printf("%i\n", sum_of_digits(123));
    printf("%i\n", sum_of_digits(55955));
    printf("%i\n", sum_of_digits(4));
    printf("%i\n", sum_of_digits(0));

    printf("%i\n", sum_of_digits_rec(123));
    printf("%i\n", sum_of_digits_rec(55955));
    printf("%i\n", sum_of_digits_rec(4));
    printf("%i\n", sum_of_digits_rec(0));

    return 0;
}