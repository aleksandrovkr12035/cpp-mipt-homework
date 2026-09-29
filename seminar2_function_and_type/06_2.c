#include <stdio.h>

long long trib(int n)
{
    long long result;

    if (n == 0)
    {
        result = 0;
    }
    else if (n == 1)
    {
        result = 0;
    }
    else if (n == 2)
    {
        result = 1;
    }
    else
    {
        result = trib(n - 1) + trib(n - 2) + trib(n - 3);
    }

    return result;
}

int main()
{
    printf("%lld\n", trib(1));
    printf("%lld\n", trib(5));
    printf("%lld\n", trib(20));

    return 0;
}