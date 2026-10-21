#include <stdio.h>
#include <string.h>

void used_chars(const char* str, char* used)
{
    int letters[26] = {0};

    while (*str != '\0')
    {
        char c = *str;

        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';

        if (c >= 'a' && c <= 'z')
            letters[c - 'a'] = 1;

        str++;
    }

    int j = 0;

    for (int i = 0; i < 26; i++)
    {
        if (letters[i] == 1)
        {
            used[j] = 'a' + i;
            j++;
        }
    }

    used[j] = '\0';
}

int main()
{
    char s[50] = "Sapere Aude";
    char u[30];

    used_chars(s, u);
    printf("%s\n", u);

    strcpy(s, "123!$@");
    used_chars(s, u);
    printf("%s\n", u);

    strcpy(s, "The Quick Brown Fox Jumps Over The Lazy Dog!");
    used_chars(s, u);
    printf("%s\n", u);

    return 0;
}