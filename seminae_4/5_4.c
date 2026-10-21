#include <stdio.h>
#include <math.h>

int solve_quadratic(double a, double b, double c,
                    double* px1, double* px2)
{
    double eps = 1e-10;

    if (fabs(a) < eps)
    {
        if (fabs(b) < eps)
            return 0;

        *px1 = -c / b;
        return 1;
    }

    double d = b * b - 4 * a * c;

    if (d < -eps)
        return 0;

    if (fabs(d) <= eps)
    {
        *px1 = -b / (2 * a);
        return 1;
    }

    *px1 = (-b + sqrt(d)) / (2 * a);
    *px2 = (-b - sqrt(d)) / (2 * a);

    return 2;
}

int main()
{
    double x1, x2;

    int n = solve_quadratic(1, -5, 6, &x1, &x2);

    printf("Количество корней: %d\n", n);

    if (n >= 1)
        printf("x1 = %f\n", x1);

    if (n == 2)
        printf("x2 = %f\n", x2);

    return 0;
}