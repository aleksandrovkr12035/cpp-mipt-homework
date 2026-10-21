#include <stdio.h>

void cube(float* px)
{
    *px = *px * *px * *px;
}

int main()
{
    float a = 3;

    cube(&a);

    printf("%f\n", a);

    return 0;
}