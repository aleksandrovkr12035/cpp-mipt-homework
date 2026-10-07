#include <stdio.h>

void encrypt(char* str, int k)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = 'A' + (str[i] - 'A' + k) % 26;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = 'a' + (str[i] - 'a' + k) % 26;
        }

        i++;
    }
}

int main()
{
    int k;
    char str[100];

    scanf("%i ", &k);
    scanf("%[^\n]", str);

    encrypt(str, k);

    printf("%s\n", str);
}