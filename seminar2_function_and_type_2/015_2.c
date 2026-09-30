#include <stdio.h>

float yearfrac(int year, int day)
{
    int a;
    float b;

    if (year % 4 == 0)
    {
        a = 366;
    }
    else
    {
        a = 365;
    }

    b = day;
    b = b / a;

    return b;
}

int main()
{
    printf("%.5f\n", yearfrac(2019, 300));
    printf("%.5f\n", yearfrac(2019, 100));
    printf("%.5f\n", yearfrac(2020, 100));

    return 0;
}