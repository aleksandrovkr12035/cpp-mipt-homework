#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%i", &n);

    int m;
    scanf("%i", &m);

    int total = 0;
    int b = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            b = pow(-1, i + j) * i * j;
            total = total + b;
        }
    }

    printf("%i\n", total);
}