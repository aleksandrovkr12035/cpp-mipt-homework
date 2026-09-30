#include <math.h>

int main() {
    float x1, y1, r1, x2, y2, r2;
    float d, e = 0.00001;
    
    scanf("%f %f %f", &x1, &y1, &r1);
    scanf("%f %f %f", &x2, &y2, &r2);
    
    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    
    if (fabs(d - (r1 + r2)) < e || fabs(d - fabs(r1 - r2)) < e)
        printf("Touch\n");

    else if (d > r1 + r2 || d < fabs(r1 - r2))
        printf("Do not intersect\n");

    else
        printf("Intersect\n");

    return 0;
}