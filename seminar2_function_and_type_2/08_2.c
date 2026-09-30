#include <stdio.h>

void reverse(int a[], int b)
{
    int c;
    int d;
    int e[100];

    c = b - 1;
    d = 0;

    while (c >= 0)
    {
        e[d] = a[c];
        printf("%i ", e[d]);
        c = c - 1;
        d = d + 1;
    }

    printf("\n");
}

int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[4] = {60, 20, 80, 10};

    reverse(arr1, 5);
    reverse(arr2, 4);

    return 0;
}