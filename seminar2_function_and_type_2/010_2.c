#include <stdio.h>

#define MAX 10

void assign(float A[MAX][MAX], float B[MAX][MAX], int n)
{
    int i;
    int j;

    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            A[i][j] = B[i][j];
            j = j + 1;
        }
        i = i + 1;
    }
}