#include <stdio.h>

unsigned long long fact(int n)
{
    unsigned long long r = 1;
    int i = 1;
    while (i <= n)
    {
        r = r * i;
        i = i + 1;
    }
    return r;
}

int main()
{
    int n, k;

    scanf("%i %i", &n, &k);

    printf("%llu\n", fact(n) / fact(n - k));

    return 0;
}