#include <stdio.h>

int is_even(int x) {
    int r;

    if (x % 2 == 0)
    {
        r = 1;
    }
    else
    {
        r = 0;
    }

    return r;
}

int main()
{
    int a;
    int b;

    a = is_even(90);
    b = is_even(91);

    printf("%i\n", a);
    printf("%i\n", b);

    return 0;
}