#include <stdio.h>
#include <math.h>

struct point
{
    double x;
    double y;
};
typedef struct point Point;

struct triangle
{
    Point a;
    Point b;
    Point c;
};
typedef struct triangle Triangle;


// Печать точки
void print_point(Point p)
{
    printf("(%.2f, %.2f)", p.x, p.y);
}


// Печать треугольника
void print_triangle(const Triangle* t)
{
    printf("{");

    print_point(t->a);
    printf(", ");

    print_point(t->b);
    printf(", ");

    print_point(t->c);

    printf("}\n");
}


// Расстояние между точками
double distance(Point a, Point b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;

    return sqrt(dx * dx + dy * dy);
}


// Периметр треугольника
double get_triangle_perimeter(const Triangle* t)
{
    return distance(t->a, t->b) +
           distance(t->b, t->c) +
           distance(t->c, t->a);
}


// Возвращает новый передвинутый треугольник
Triangle moved_triangle(const Triangle* t, Point d)
{
    Triangle result = *t;

    result.a.x += d.x;
    result.a.y += d.y;

    result.b.x += d.x;
    result.b.y += d.y;

    result.c.x += d.x;
    result.c.y += d.y;

    return result;
}


// Изменяет исходный треугольник
void move_triangle(Triangle* t, Point d)
{
    *t = moved_triangle(t, d);
}


int main()
{
    Triangle t = {
        {1.00, 0.00},
        {0.50, 2.00},
        {0.00, 1.50}
    };

    printf("Perimeter = %.2f\n",
           get_triangle_perimeter(&t));

    Point d = {1.0, 1.0};

    print_triangle(&t);

    move_triangle(&t, d);

    print_triangle(&t);

    return 0;
}