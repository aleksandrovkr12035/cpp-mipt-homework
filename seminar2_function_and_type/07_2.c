#include <stdio.h>

int count_even(int a[], int b)
{
    int c;
    int d;

    c = 0;
    d = 0;

    while (d < b)
    {
        if (a[d] % 2 == 0)
        {
            c = c + 1;
        }

        d = d + 1;
    }

    return c;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[4] = {10, 20, 30, 40};
    int arr3[2] = {10, 1};

    printf("%i\n", count_even(arr1, 5));
    printf("%i\n", count_even(arr2, 4));
    printf("%i\n", count_even(arr3, 2));

    return 0;
}