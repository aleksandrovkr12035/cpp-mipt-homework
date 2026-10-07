#include <stdio.h>

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        printf("Ошибка: Неверное количество аргументов!\n");
        return 0;
    }
    int a, b;
    char op;
    char extra;




    if (sscanf(argv[1], "%i %c %i %c", &a, &op, &b, &extra) != 3)
    {
        printf("Ошибка: Неверный формат!\n");
        return 0;
    }

    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
    {
        printf("Ошибка: Неверный оператор!\n");
        return 0;
    }

    if ((op == '/' || op == '%') && b == 0)
    {
        printf("Ошибка: Деление на ноль!\n");
        return 0;
    }

    if (op == '+')
        printf("%i\n", a + b);
    else if (op == '-')
        printf("%i\n", a - b);
    else if (op == '*')
        printf("%i\n", a * b);
    else if (op == '/')
        printf("%i\n", a / b);
    else if (op == '%')
        printf("%i\n", a % b);

    return 0;
}